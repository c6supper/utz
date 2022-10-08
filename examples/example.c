/** @file example.c
 *  @brief FIXME
 *
 *  @author eV Quirk
 */

#include "utz.h"
#include "zones.h"

char *zones[] = {
"Urumqi",
"Shanghai",
"Kaliningrad",
"Kirov",
"Moscow",
"Saratov",
"Samara",
"Yekaterinburg",
"Omsk",
"Barnaul",
"Krasnoyarsk",
"Novosibirsk",
"Irkutsk",
"Chita",
"Vladivostok",
"Magadan",
"Sakhalin",
"Srednekolymsk",
"Anadyr",
"Kamchatka",
"Minsk",
"Aqtobe",
"Oral",
"Almaty",
"Riyadh",
"Dubai",
"Muscat",
"Kuwait",
"Bahrain",
"Qatar",
"Baghdad",
"Amman",
"Cairo",
"Tunis",
"Karachi",
"Colombo",
"Kathmandu",
"Dhaka",
"Rio_Branco",
"Manaus",
"Cuiaba",
"Bahia",
"Sao_Paulo",
"Noronha",
"Easter",
"Santiago",
"Punta_Arenas",
"Lima",
"Galapagos",
"Guayaqui",
"Bogota",
"Costa_Rica",
"San_Luis",
"Buenos_Aires",
"Asuncion",
"Belize",
"Guatemala",
"La_Paz",
"Tortola",
"Tegucigalpa",
"Montevideo",
"Aruba",
"St_Barthelemy",
"Managua",
"Curacao",
"Perth",
"Eucla",
"Darwin",
"Adelaide",
"Brisbane",
"Sydney",
"Lord_Howe",
"Macquarie",
"Auckland",
"Chatham",
"Johannesburg",
"Windhoek",
"Gaborone",
"Lusaka",
"Harare",
"Mauritius",
"Dar_es_Salaam",
"Maseru",
"Mbabane",
"Blantyre",
"Maputo",
"Bangkok",
"Jakarta",
"Makassar",
"Jayapura",
"Ho_Chi_Minh",
"Manila",
"Kuala_Lumpur",
"Kiev",
"Baku",
"Chisinau",
"Tashkent",
"Nairobi",
"Rome",
"Paris",
"Canary",
"Madrid",
"Berlin",
"Oslo",
"Amsterdam",
"London",
"Jerusalem",
"Singapore",
"Brunei",
"Hong_Kong",
"Macau"
};

char *zones_names[] = {
"Asia/Urumqi",
"Asia/Shanghai",
"Europe/Kaliningrad",
"Europe/Kirov",
"Europe/Moscow",
"Europe/Saratov",
"Europe/Samara",
"Asia/Yekaterinburg",
"Asia/Omsk",
"Asia/Barnaul",
"Asia/Krasnoyarsk",
"Asia/Novosibirsk",
"Asia/Irkutsk",
"Asia/Chita",
"Asia/Vladivostok",
"Asia/Magadan",
"Asia/Sakhalin",
"Asia/Srednekolymsk",
"Asia/Anadyr",
"Asia/Kamchatka",
"Europe/Minsk",
"Asia/Aqtobe",
"Asia/Oral",
"Asia/Almaty",
"Asia/Riyadh",
"Asia/Dubai",
"Asia/Muscat",
"Asia/Kuwait",
"Asia/Bahrain",
"Asia/Qatar",
"Asia/Baghdad",
"Asia/Amman",
"Africa/Cairo",
"Africa/Tunis",
"Asia/Karachi",
"Asia/Colombo",
"Asia/Kathmandu",
"Asia/Dhaka",
"America/Rio_Branco",
"America/Manaus",
"America/Cuiaba",
"America/Bahia",
"America/Sao_Paulo",
"America/Noronha",
"Pacific/Easter",
"America/Santiago",
"Punta_Arenas",
"America/Lima",
"Pacific/Galapagos",
"America/Guayaqui",
"America/Bogota",
"America/Costa_Rica",
"America/Argentina/San_Luis",
"America/Argentina/Buenos_Aires",
"America/Asuncion",
"America/Belize",
"America/Guatemala",
"America/La_Paz",
"America/Tortola",
"America/Tegucigalpa",
"America/Montevideo",
"America/Aruba",
"America/St_Barthelemy",
"America/Managua",
"America/Curacao",
"Australia/Perth",
"Australia/Eucla",
"Australia/Darwin",
"Australia/Adelaide",
"Australia/Brisbane",
"Australia/Sydney",
"Australia/Lord_Howe",
"Antarctica/Macquarie",
"Pacific/Auckland",
"Pacific/Chatham",
"Africa/Johannesburg",
"Africa/Windhoek",
"Africa/Gaborone",
"Africa/Lusaka",
"Africa/Harare",
"Indian/Mauritius",
"Africa/Dar_es_Salaam",
"Africa/Maseru",
"Africa/Mbabane",
"Africa/Blantyre",
"Africa/Maputo",
"Asia/Bangkok",
"Asia/Jakarta",
"Asia/Makassar",
"Asia/Jayapura",
"Asia/Ho_Chi_Minh",
"Asia/Manila",
"Asia/Kuala_Lumpur",
"Europe/Kiev",
"Asia/Baku",
"Europe/Chisinau",
"Asia/Tashkent",
"Africa/Nairobi",
"Europe/Rome",
"Europe/Paris",
"Atlantic/Canary",
"Europe/Madrid",
"Europe/Berlin",
"Europe/Oslo",
"Europe/Amsterdam",
"Europe/London",
"Asia/Jerusalem",
"Asia/Singapore",
"Asia/Brunei",
"Asia/Hong_Kong",
"Asia/Macau"
};
#include <stdio.h>
void main() {
  // printf("Total library db size: %d B\n", sizeof(zone_rules) + sizeof(zone_abrevs) + sizeof(zone_defns) + sizeof(zone_names));

  udatetime_t dt = {0};
  dt.date.year = 2020;
  dt.date.month = 10;
  dt.date.dayofmonth = 26;
  dt.time.hour = 1;
  dt.time.minute = 0;
  dt.time.second = 0;

  for (size_t i = 0; i < 111; i++)
  {
    uzone_t active_zone;
    get_zone_by_name(zones[i], &active_zone);
    uoffset_t offset;
    // char c = get_current_offset(&active_zone, &dt, &offset);
    // printf("%s, current offset: %d.%d\n", active_zone.name, offset.hours, offset.minutes / 60);
    // printf(active_zone.abrev_formatter, c);
    // printf("\n");
    printf("%s\n", zones_names[i]);
    dump_rules(active_zone.rules, active_zone.rules_len);
  }
}
