/** @file example.c
 *  @brief FIXME
 *
 *  @author eV Quirk
 */

#include "utz.h"
#include "zones.h"

#include <stdio.h>
void main()
{
#ifdef UTZ_TIGHT
  printf("Total library db size: %d B\n", sizeof(zone_rules) + sizeof(zone_abrevs) + sizeof(zone_defns) + sizeof(zone_names));
#else
  printf("Total library db size: %d B\n", sizeof(zone_rules) + sizeof(zone_defns));
#endif

  udatetime_t dt = {0};
  dt.date.year = 17;
  dt.date.month = 9;
  dt.date.dayofmonth = 26;
  dt.time.hour = 1;
  dt.time.minute = 0;
  dt.time.second = 0;

  uzone_t active_zone;
#ifdef UTZ_TIGHT
  get_zone_by_name("Karachi", &active_zone);
#endif
  uoffset_t offset;
  char c = get_current_offset(&active_zone, &dt, &offset);
  printf("%s, current offset: %d.%d\n", active_zone.name, offset.hours, offset.minutes / 60);
  printf(active_zone.abrev_formatter, c);
  printf("\n");
}
