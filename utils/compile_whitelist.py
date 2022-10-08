#!/usr/bin/env python
""" Small script to generate default zone whitelist from android and wikipedia info

eV Quirk
"""

import xml.etree.ElementTree as ElementTree
import os
import click

CONTEXT_SETTINGS = dict(help_option_names=['-h', '--help'])
@click.command(context_settings=CONTEXT_SETTINGS)
@click.option('--tight', '-t',
              default=os.environ.get('UTZ_TIGHT', True),
              help='Tight version, without zone names')

def main(tight):

    if tight == False:
        zones = set()
        tree = ElementTree.parse('vendor/android/timezones.xml')
        zones.update([child.attrib['id'] for child in tree.getroot()])
    else:
        zones = set()
        tree = ElementTree.parse('vendor/nobo/timezones.xml')
        zones.update([child.attrib['id'] for child in tree.getroot()])

    if os.path.isfile('majormetros') and os.access('majormetros', os.R_OK):
        with open('majormetros') as f:
            for line in f:
                zones.add(line.split('\t')[1].strip())
                zones.add(line.split('\t')[2].strip())

    with open('whitelist.txt', 'w') as f:
        f.write('\n'.join(sorted(zones)))


if __name__ == '__main__':
    main()
