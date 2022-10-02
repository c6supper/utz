#ifndef _ZONES_H
#define _ZONES_H

const urule_packed_t zone_rules[60];

#ifdef UTZ_TIGHT
const char zone_abrevs[298];

#define MAX_ABREV_FORMATTER_LEN 11

#endif

const uzone_packed_t zone_defns[64];
#define UTZ_ADELAIDE         &zone_defns[ 47]
#define UTZ_ALMATY           &zone_defns[ 22]
#define UTZ_AMMAN            &zone_defns[ 23]
#define UTZ_AMSTERDAM        &zone_defns[ 53]
#define UTZ_ANCHORAGE        &zone_defns[  4]
#define UTZ_ATHENS           &zone_defns[ 54]
#define UTZ_AUCKLAND         &zone_defns[ 58]
#define UTZ_AZORES           &zone_defns[ 44]
#define UTZ_BAGHDAD          &zone_defns[ 24]
#define UTZ_BAKU             &zone_defns[ 25]
#define UTZ_BANGKOK          &zone_defns[ 26]
#define UTZ_BARBADOS         &zone_defns[  5]
#define UTZ_BEIRUT           &zone_defns[ 27]
#define UTZ_BELGRADE         &zone_defns[ 53]
#define UTZ_BOGOTA           &zone_defns[  6]
#define UTZ_BRISBANE         &zone_defns[ 48]
#define UTZ_BRUSSELS         &zone_defns[ 53]
#define UTZ_CAIRO            &zone_defns[  0]
#define UTZ_CAPE_VERDE       &zone_defns[ 45]
#define UTZ_CARACAS          &zone_defns[  7]
#define UTZ_CASABLANCA       &zone_defns[  1]
#define UTZ_CHICAGO          &zone_defns[  8]
#define UTZ_CHIHUAHUA        &zone_defns[  9]
#define UTZ_COLOMBO          &zone_defns[ 28]
#define UTZ_COSTA_RICA       &zone_defns[ 10]
#define UTZ_DARWIN           &zone_defns[ 49]
#define UTZ_DENVER           &zone_defns[ 11]
#define UTZ_DUBAI            &zone_defns[ 29]
#define UTZ_FIJI             &zone_defns[ 59]
#define UTZ_GODTHAB          &zone_defns[ 12]
#define UTZ_GUAM             &zone_defns[ 60]
#define UTZ_HALIFAX          &zone_defns[ 13]
#define UTZ_HELSINKI         &zone_defns[ 54]
#define UTZ_HOBART           &zone_defns[ 50]
#define UTZ_HONG_KONG        &zone_defns[ 30]
#define UTZ_HONOLULU         &zone_defns[ 61]
#define UTZ_IRKUTSK          &zone_defns[ 31]
#define UTZ_JAKARTA          &zone_defns[ 32]
#define UTZ_JERUSALEM        &zone_defns[ 33]
#define UTZ_KABUL            &zone_defns[ 34]
#define UTZ_KARACHI          &zone_defns[ 35]
#define UTZ_KRASNOYARSK      &zone_defns[ 26]
#define UTZ_KUALA_LUMPUR     &zone_defns[ 31]
#define UTZ_LONDON           &zone_defns[ 55]
#define UTZ_LOS_ANGELES      &zone_defns[ 14]
#define UTZ_MAGADAN          &zone_defns[ 36]
#define UTZ_MAJURO           &zone_defns[ 62]
#define UTZ_MANAUS           &zone_defns[  7]
#define UTZ_MEXICO_CITY      &zone_defns[ 15]
#define UTZ_MINSK            &zone_defns[ 56]
#define UTZ_MONTEVIDEO       &zone_defns[ 16]
#define UTZ_MOSCOW           &zone_defns[ 57]
#define UTZ_NAIROBI          &zone_defns[  2]
#define UTZ_NEW_YORK         &zone_defns[ 17]
#define UTZ_ORAL             &zone_defns[ 37]
#define UTZ_PERTH            &zone_defns[ 51]
#define UTZ_PHOENIX          &zone_defns[ 18]
#define UTZ_REGINA           &zone_defns[ 10]
#define UTZ_SANTIAGO         &zone_defns[ 19]
#define UTZ_SAO_PAULO        &zone_defns[ 20]
#define UTZ_SARAJEVO         &zone_defns[ 53]
#define UTZ_SEOUL            &zone_defns[ 38]
#define UTZ_SHANGHAI         &zone_defns[ 39]
#define UTZ_SOUTH_GEORGIA    &zone_defns[ 46]
#define UTZ_ST_JOHNS         &zone_defns[ 21]
#define UTZ_SYDNEY           &zone_defns[ 52]
#define UTZ_TAIPEI           &zone_defns[ 39]
#define UTZ_TBILISI          &zone_defns[ 29]
#define UTZ_TEHRAN           &zone_defns[ 40]
#define UTZ_TIJUANA          &zone_defns[ 14]
#define UTZ_TOKYO            &zone_defns[ 41]
#define UTZ_TONGATAPU        &zone_defns[ 63]
#define UTZ_VLADIVOSTOK      &zone_defns[ 42]
#define UTZ_WINDHOEK         &zone_defns[  3]
#define UTZ_YAKUTSK          &zone_defns[ 43]
#define UTZ_YEKATERINBURG    &zone_defns[ 37]
#define UTZ_YEREVAN          &zone_defns[ 25]

#ifdef UTZ_TIGHT
#define NUM_ZONE_NAMES 77
#define MAX_ZONE_NAME_LEN 14

const unsigned char zone_names[722];
#endif

#endif /* _ZONES_H */