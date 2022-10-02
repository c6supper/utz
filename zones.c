#include "utz.h"

const urule_packed_t zone_rules[60] = {
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	AN	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  8, 255, 7,  1,  1,  2, 0, 2, 10, 1}, // 	AN	2008	max	-	Oct	Sun>=1	2:00s	1:00	D
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	AS	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  8, 255, 7,  1,  1,  2, 0, 2, 10, 1}, // 	AS	2008	max	-	Oct	Sun>=1	2:00s	1:00	D
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	AT	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  1, 255, 7,  1,  1,  2, 0, 2, 10, 1}, // 	AT	2001	max	-	Oct	Sun>=1	2:00s	1:00	D
{ 16,  22, 6, 14,  1, 23, 0, 0,  2, 0}, // 	Brazil	2016	2022	-	Feb	Sun>=15	0:00	0	-
{ 23,  23, 6, 21,  1, 23, 0, 0,  2, 0}, // 	Brazil	2023	only	-	Feb	Sun>=22	0:00	0	-
{ 24,  25, 6, 14,  1, 23, 0, 0,  2, 0}, // 	Brazil	2024	2025	-	Feb	Sun>=15	0:00	0	-
{ 26,  26, 6, 21,  1, 23, 0, 0,  2, 0}, // 	Brazil	2026	only	-	Feb	Sun>=22	0:00	0	-
{ 27,  33, 6, 14,  1, 23, 0, 0,  2, 0}, // 	Brazil	2027	2033	-	Feb	Sun>=15	0:00	0	-
{ 34,  34, 6, 21,  1, 23, 0, 0,  2, 0}, // 	Brazil	2034	only	-	Feb	Sun>=22	0:00	0	-
{ 35,  36, 6, 14,  1, 23, 0, 0,  2, 0}, // 	Brazil	2035	2036	-	Feb	Sun>=15	0:00	0	-
{ 37,  37, 6, 21,  1, 23, 0, 0,  2, 0}, // 	Brazil	2037	only	-	Feb	Sun>=22	0:00	0	-
{ 38, 255, 6, 14,  1, 23, 0, 0,  2, 0}, // 	Brazil	2038	max	-	Feb	Sun>=15	0:00	0	-
{ 18, 255, 7,  1,  1,  0, 0, 0, 11, 1}, // 	Brazil	2018	max	-	Nov	Sun>=1	0:00	1:00	-
{  7, 255, 7,  8,  1,  2, 0, 2,  3, 1}, // 	Canada	2007	max	-	Mar	Sun>=8	2:00	1:00	D
{  7, 255, 7,  1,  1,  1, 0, 1, 11, 0}, // 	Canada	2007	max	-	Nov	Sun>=1	2:00	0	S
{ 16, 255, 7,  9,  0,  3, 0, 0,  5, 0}, // 	Chile	2016	max	-	May	Sun>=9	3:00u	0	-
{ 16, 255, 7,  9,  0,  4, 0, 0,  8, 1}, // 	Chile	2016	max	-	Aug	Sun>=9	4:00u	1:00	-
{  0, 255, 7,  0,  0,  1, 0, 1,  3, 1}, // 	EU	1981	max	-	Mar	lastSun	 1:00u	1:00	S
{  0, 255, 7,  0,  0,  1, 0, 0, 10, 0}, // 	EU	1996	max	-	Oct	lastSun	 1:00u	0	-
{ 15, 255, 7, 14,  1,  2, 0, 0,  1, 0}, // 	Fiji	2015	max	-	Jan	Sun>=14	3:00	0	-
{ 14, 255, 7,  1,  1,  2, 0, 0, 11, 1}, // 	Fiji	2014	max	-	Nov	Sun>=1	2:00	1:00	-
{ 21,  23, 0, 22,  1,  0, 0, 0,  3, 1}, // 	Iran	2021	2023	-	Mar	22	0:00	1:00	-
{ 24,  24, 0, 21,  1,  0, 0, 0,  3, 1}, // 	Iran	2024	only	-	Mar	21	0:00	1:00	-
{ 25,  27, 0, 22,  1,  0, 0, 0,  3, 1}, // 	Iran	2025	2027	-	Mar	22	0:00	1:00	-
{ 28,  29, 0, 21,  1,  0, 0, 0,  3, 1}, // 	Iran	2028	2029	-	Mar	21	0:00	1:00	-
{ 30,  31, 0, 22,  1,  0, 0, 0,  3, 1}, // 	Iran	2030	2031	-	Mar	22	0:00	1:00	-
{ 32,  33, 0, 21,  1,  0, 0, 0,  3, 1}, // 	Iran	2032	2033	-	Mar	21	0:00	1:00	-
{ 34,  35, 0, 22,  1,  0, 0, 0,  3, 1}, // 	Iran	2034	2035	-	Mar	22	0:00	1:00	-
{ 36, 255, 0, 21,  1,  0, 0, 0,  3, 1}, // 	Iran	2036	max	-	Mar	21	0:00	1:00	-
{ 21,  23, 0, 21,  1, 23, 0, 0,  9, 0}, // 	Iran	2021	2023	-	Sep	22	0:00	0	-
{ 24,  24, 0, 20,  1, 23, 0, 0,  9, 0}, // 	Iran	2024	only	-	Sep	21	0:00	0	-
{ 25,  27, 0, 21,  1, 23, 0, 0,  9, 0}, // 	Iran	2025	2027	-	Sep	22	0:00	0	-
{ 28,  29, 0, 20,  1, 23, 0, 0,  9, 0}, // 	Iran	2028	2029	-	Sep	21	0:00	0	-
{ 30,  31, 0, 21,  1, 23, 0, 0,  9, 0}, // 	Iran	2030	2031	-	Sep	22	0:00	0	-
{ 32,  33, 0, 20,  1, 23, 0, 0,  9, 0}, // 	Iran	2032	2033	-	Sep	21	0:00	0	-
{ 34,  35, 0, 21,  1, 23, 0, 0,  9, 0}, // 	Iran	2034	2035	-	Sep	22	0:00	0	-
{ 36, 255, 0, 20,  1, 23, 0, 0,  9, 0}, // 	Iran	2036	max	-	Sep	21	0:00	0	-
{ 14, 255, 4,  0,  1, 24, 0, 1,  3, 1}, // 	Jordan	2014	max	-	Mar	lastThu	24:00	1:00	S
{ 14, 255, 5,  0,  1,  0, 0, 0, 10, 0}, // 	Jordan	2014	max	-	Oct	lastFri	0:00s	0	-
{  0, 255, 7,  0,  1,  0, 0, 1,  3, 1}, // 	Lebanon	1993	max	-	Mar	lastSun	0:00	1:00	S
{  0, 255, 7,  0,  1,  0, 0, 0, 10, 0}, // 	Lebanon	1999	max	-	Oct	lastSun	0:00	0	-
{  2, 255, 7,  1,  1,  2, 0, 2,  4, 1}, // 	Mexico	2002	max	-	Apr	Sun>=1	2:00	1:00	D
{  2, 255, 7,  0,  1,  1, 0, 1, 10, 0}, // 	Mexico	2002	max	-	Oct	lastSun	2:00	0	S
{ 26, 255, 7,  0,  1,  2, 0, 1,  3, 1}, // 	Morocco	2026	max	-	Mar	lastSun	 2:00	1:00	S
{ 23,  23, 0, 23,  1,  2, 0, 1,  4, 1}, // 	Morocco	2023	only	-	Apr	23	 2:00	1:00	S
{ 24,  24, 0, 14,  1,  2, 0, 1,  4, 1}, // 	Morocco	2024	only	-	Apr	14	 2:00	1:00	S
{ 25,  25, 0,  6,  1,  2, 0, 1,  4, 1}, // 	Morocco	2025	only	-	Apr	 6	 2:00	1:00	S
{ 22,  22, 0,  8,  1,  2, 0, 1,  5, 1}, // 	Morocco	2022	only	-	May	 8	 2:00	1:00	S
{ 13, 255, 7,  0,  1,  2, 0, 0, 10, 0}, // 	Morocco	2013	max	-	Oct	lastSun	 3:00	0	-
{ 36,  36, 0, 19,  1,  2, 0, 0, 10, 0}, // 	Morocco	2036	only	-	Oct	19	 3:00	0	-
{ 37,  37, 0,  4,  1,  2, 0, 0, 10, 0}, // 	Morocco	2037	only	-	Oct	 4	 3:00	0	-
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	NZ	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  7, 255, 7,  0,  1,  2, 0, 2,  9, 1}, // 	NZ	2007	max	-	Sep	lastSun	2:00s	1:00	D
{  7, 255, 7,  8,  1,  2, 0, 2,  3, 1}, // 	US	2007	max	-	Mar	Sun>=8	2:00	1:00	D
{  7, 255, 7,  1,  1,  1, 0, 1, 11, 0}, // 	US	2007	max	-	Nov	Sun>=1	2:00	0	S
{ 13, 255, 5, 23,  1,  2, 0, 2,  3, 1}, // 	Zion	2013	max	-	Mar	Fri>=23	2:00	1:00	D
{ 13, 255, 7,  0,  1,  1, 0, 1, 10, 0}, // 	Zion	2013	max	-	Oct	lastSun	2:00	0	S
};


#ifdef UTZ_TIGHT
const char zone_abrevs[298] = {
'E','E','S','T','\0',
'W','E','%','c','T','\0',
'E','A','T','\0',
'S','\0',
'A','K','%','c','T','\0',
'A','S','T','\0',
'-','0','5','/','-','0','4','\0',
'-','0','4','\0',
'C','%','c','T','\0',
'M','%','c','T','\0',
'C','S','T','\0',
'-','0','3','/','-','0','2','\0',
'A','%','c','T','\0',
'P','%','c','T','\0',
'E','%','c','T','\0',
'M','S','T','\0',
'-','0','4','/','-','0','3','\0',
'N','%','c','T','\0',
'+','0','6','\0',
'E','E','%','c','T','\0',
'+','0','3','/','+','0','4','\0',
'+','0','4','/','+','0','5','\0',
'+','0','7','\0',
'+','0','5','3','0','\0',
'+','0','4','\0',
'H','K','S','T','\0',
'+','0','8','\0',
'W','I','B','\0',
'I','%','c','T','\0',
'+','0','4','3','0','\0',
'P','K','S','T','\0',
'+','1','1','\0',
'+','0','5','\0',
'K','S','T','\0',
'+','0','3','3','0','/','+','0','4','3','0','\0',
'J','S','T','\0',
'+','1','0','\0',
'+','0','9','\0',
'-','0','1','/','+','0','0','\0',
'-','0','1','\0',
'-','0','2','\0',
'A','C','%','c','T','\0',
'A','E','S','T','\0',
'A','C','S','T','\0',
'A','E','%','c','T','\0',
'A','W','S','T','\0',
'C','E','%','c','T','\0',
'G','M','T','/','B','S','T','\0',
'+','0','3','\0',
'M','S','K','\0',
'N','Z','%','c','T','\0',
'+','1','2','/','+','1','3','\0',
'C','h','S','T','\0',
'H','S','T','\0',
'+','1','2','\0',
'+','1','3','/','+','1','4','\0',
};

#endif

const uzone_packed_t zone_defns[64] = {
// Africa/Cairo	2:00	Egypt	EE%sT
{  8,   0,   0,   0},
// Africa/Casablanca	0:00	Morocco	WE%sT
{  0,  46,   8,   5},
// Africa/Nairobi	3:00	-	EAT
{ 12,   0,   0,  11},
// Africa/Windhoek	2:00	Namibia	%s
{  8,   0,   0,  15},
// America/Anchorage	-9:00	US	AK%sT
{-36,  56,   2,  17},
// America/Barbados	-4:00	Barb	A%sT
{-16,   0,   0,  23},
// America/Bogota	-5:00	CO	-05/-04
{-20,   0,   0,  27},
// America/Caracas	-4:00	-	-04
// America/Manaus	-4:00	-	-04
{-16,   0,   0,  35},
// America/Chicago	-6:00	US	C%sT
{-24,  56,   2,  39},
// America/Chihuahua	-7:00	Mexico	M%sT
{-28,  44,   2,  44},
// America/Costa_Rica	-6:00	CR	C%sT
// America/Regina	-6:00	-	CST
{-24,   0,   0,  49},
// America/Denver	-7:00	US	M%sT
{-28,  56,   2,  44},
// America/Godthab	-3:00	EU	-03/-02
{-12,  20,   2,  53},
// America/Halifax	-4:00	Canada	A%sT
{-16,  16,   2,  61},
// America/Los_Angeles	-8:00	US	P%sT
// America/Tijuana	-8:00	US	P%sT
{-32,  56,   2,  66},
// America/Mexico_City	-6:00	Mexico	C%sT
{-24,  44,   2,  39},
// America/Montevideo	-3:00	Uruguay	-03/-02
{-12,   0,   0,  53},
// America/New_York	-5:00	US	E%sT
{-20,  56,   2,  71},
// America/Phoenix	-7:00	-	MST
{-28,   0,   0,  76},
// America/Santiago	-4:00	Chile	-04/-03
{-16,  18,   2,  80},
// America/Sao_Paulo	-3:00	Brazil	-03/-02
{-12,   6,  10,  53},
// America/St_Johns	-3:30	Canada	N%sT
{-10,  16,   2,  88},
// Asia/Almaty	6:00	-	+06
{ 24,   0,   0,  93},
// Asia/Amman	2:00	Jordan	EE%sT
{  8,  40,   2,  97},
// Asia/Baghdad	3:00	Iraq	+03/+04
{ 12,   0,   0, 103},
// Asia/Baku	4:00	Azer	+04/+05
// Asia/Yerevan	4:00	Armenia	+04/+05
{ 16,   0,   0, 111},
// Asia/Bangkok	7:00	-	+07
// Asia/Krasnoyarsk	7:00	-	+07
{ 28,   0,   0, 119},
// Asia/Beirut	2:00	Lebanon	EE%sT
{  8,  42,   2,  97},
// Asia/Colombo	5:30	-	+0530
{ 22,   0,   0, 123},
// Asia/Dubai	4:00	-	+04
// Asia/Tbilisi	4:00	-	+04
{ 16,   0,   0, 129},
// Asia/Hong_Kong	8:00	HK	HK%sT
{ 32,   0,   0, 133},
// Asia/Irkutsk	8:00	-	+08
// Asia/Kuala_Lumpur	8:00	-	+08
{ 32,   0,   0, 138},
// Asia/Jakarta	7:00	-	WIB
{ 28,   0,   0, 142},
// Asia/Jerusalem	2:00	Zion	I%sT
{  8,  58,   2, 146},
// Asia/Kabul	4:30	-	+0430
{ 18,   0,   0, 151},
// Asia/Karachi	5:00	Pakistan	PK%sT
{ 20,   0,   0, 157},
// Asia/Magadan	11:00	-	+11
{ 44,   0,   0, 162},
// Asia/Oral	5:00	-	+05
// Asia/Yekaterinburg	5:00	-	+05
{ 20,   0,   0, 166},
// Asia/Seoul	9:00	ROK	K%sT
{ 36,   0,   0, 170},
// Asia/Shanghai	8:00	PRC	C%sT
// Asia/Taipei	8:00	Taiwan	C%sT
{ 32,   0,   0,  49},
// Asia/Tehran	3:30	Iran	+0330/+0430
{ 14,  24,  16, 174},
// Asia/Tokyo	9:00	Japan	J%sT
{ 36,   0,   0, 186},
// Asia/Vladivostok	10:00	-	+10
{ 40,   0,   0, 190},
// Asia/Yakutsk	9:00	-	+09
{ 36,   0,   0, 194},
// Atlantic/Azores	-1:00	EU	-01/+00
{ -4,  20,   2, 198},
// Atlantic/Cape_Verde	-1:00	-	-01
{ -4,   0,   0, 206},
// Atlantic/South_Georgia	-2:00	-	-02
{ -8,   0,   0, 210},
// Australia/Adelaide	9:30	AS	AC%sT
{ 38,   2,   2, 214},
// Australia/Brisbane	10:00	AQ	AE%sT
{ 40,   0,   0, 220},
// Australia/Darwin	9:30	Aus	AC%sT
{ 38,   0,   0, 225},
// Australia/Hobart	10:00	AT	AE%sT
{ 40,   4,   2, 230},
// Australia/Perth	8:00	AW	AW%sT
{ 32,   0,   0, 236},
// Australia/Sydney	10:00	AN	AE%sT
{ 40,   0,   2, 230},
// Europe/Amsterdam	1:00	EU	CE%sT
// Europe/Belgrade	1:00	EU	CE%sT
// Europe/Brussels	1:00	EU	CE%sT
{  4,  20,   2, 241},
// Europe/Athens	2:00	EU	EE%sT
// Europe/Helsinki	2:00	EU	EE%sT
{  8,  20,   2,  97},
// Europe/London	0:00	EU	GMT/BST
{  0,  20,   2, 247},
// Europe/Minsk	3:00	-	+03
{ 12,   0,   0, 255},
// Europe/Moscow	3:00	-	MSK
{ 12,   0,   0, 259},
// Pacific/Auckland	12:00	NZ	NZ%sT
{ 48,  54,   2, 263},
// Pacific/Fiji	12:00	Fiji	+12/+13
{ 48,  22,   2, 269},
// Pacific/Guam	10:00	-	ChST
{ 40,   0,   0, 277},
// Pacific/Honolulu	-10:00	-	HST
{-40,   0,   0, 282},
// Pacific/Majuro	12:00	-	+12
{ 48,   0,   0, 286},
// Pacific/Tongatapu	13:00	Tonga	+13/+14
{ 52,   0,   0, 290},
};

#ifdef UTZ_TIGHT
const unsigned char zone_names[722] = {
                             'A','d','e','l','a','i','d','e','\0',  47, // Adelaide
                                     'A','l','m','a','t','y','\0',  22, // Almaty
                                         'A','m','m','a','n','\0',  23, // Amman
                         'A','m','s','t','e','r','d','a','m','\0',  53, // Amsterdam
                         'A','n','c','h','o','r','a','g','e','\0',   4, // Anchorage
                                     'A','t','h','e','n','s','\0',  54, // Athens
                             'A','u','c','k','l','a','n','d','\0',  58, // Auckland
                                     'A','z','o','r','e','s','\0',  44, // Azores
                                 'B','a','g','h','d','a','d','\0',  24, // Baghdad
                                             'B','a','k','u','\0',  25, // Baku
                                 'B','a','n','g','k','o','k','\0',  26, // Bangkok
                             'B','a','r','b','a','d','o','s','\0',   5, // Barbados
                                     'B','e','i','r','u','t','\0',  27, // Beirut
                             'B','e','l','g','r','a','d','e','\0',  53, // Belgrade
                                     'B','o','g','o','t','a','\0',   6, // Bogota
                             'B','r','i','s','b','a','n','e','\0',  48, // Brisbane
                             'B','r','u','s','s','e','l','s','\0',  53, // Brussels
                                         'C','a','i','r','o','\0',   0, // Cairo
                     'C','a','p','e',' ','V','e','r','d','e','\0',  45, // Cape Verde
                                 'C','a','r','a','c','a','s','\0',   7, // Caracas
                     'C','a','s','a','b','l','a','n','c','a','\0',   1, // Casablanca
                                 'C','h','i','c','a','g','o','\0',   8, // Chicago
                         'C','h','i','h','u','a','h','u','a','\0',   9, // Chihuahua
                                 'C','o','l','o','m','b','o','\0',  28, // Colombo
                     'C','o','s','t','a',' ','R','i','c','a','\0',  10, // Costa Rica
                                     'D','a','r','w','i','n','\0',  49, // Darwin
                                     'D','e','n','v','e','r','\0',  11, // Denver
                                         'D','u','b','a','i','\0',  29, // Dubai
                                             'F','i','j','i','\0',  59, // Fiji
                                 'G','o','d','t','h','a','b','\0',  12, // Godthab
                                             'G','u','a','m','\0',  60, // Guam
                                 'H','a','l','i','f','a','x','\0',  13, // Halifax
                             'H','e','l','s','i','n','k','i','\0',  54, // Helsinki
                                     'H','o','b','a','r','t','\0',  50, // Hobart
                         'H','o','n','g',' ','K','o','n','g','\0',  30, // Hong Kong
                             'H','o','n','o','l','u','l','u','\0',  61, // Honolulu
                                 'I','r','k','u','t','s','k','\0',  31, // Irkutsk
                                 'J','a','k','a','r','t','a','\0',  32, // Jakarta
                         'J','e','r','u','s','a','l','e','m','\0',  33, // Jerusalem
                                         'K','a','b','u','l','\0',  34, // Kabul
                                 'K','a','r','a','c','h','i','\0',  35, // Karachi
                 'K','r','a','s','n','o','y','a','r','s','k','\0',  26, // Krasnoyarsk
             'K','u','a','l','a',' ','L','u','m','p','u','r','\0',  31, // Kuala Lumpur
                                     'L','o','n','d','o','n','\0',  55, // London
                 'L','o','s',' ','A','n','g','e','l','e','s','\0',  14, // Los Angeles
                                 'M','a','g','a','d','a','n','\0',  36, // Magadan
                                     'M','a','j','u','r','o','\0',  62, // Majuro
                                     'M','a','n','a','u','s','\0',   7, // Manaus
                 'M','e','x','i','c','o',' ','C','i','t','y','\0',  15, // Mexico City
                                         'M','i','n','s','k','\0',  56, // Minsk
                     'M','o','n','t','e','v','i','d','e','o','\0',  16, // Montevideo
                                     'M','o','s','c','o','w','\0',  57, // Moscow
                                 'N','a','i','r','o','b','i','\0',   2, // Nairobi
                             'N','e','w',' ','Y','o','r','k','\0',  17, // New York
                                             'O','r','a','l','\0',  37, // Oral
                                         'P','e','r','t','h','\0',  51, // Perth
                                 'P','h','o','e','n','i','x','\0',  18, // Phoenix
                                     'R','e','g','i','n','a','\0',  10, // Regina
                             'S','a','n','t','i','a','g','o','\0',  19, // Santiago
                         'S','a','o',' ','P','a','u','l','o','\0',  20, // Sao Paulo
                             'S','a','r','a','j','e','v','o','\0',  53, // Sarajevo
                                         'S','e','o','u','l','\0',  38, // Seoul
                             'S','h','a','n','g','h','a','i','\0',  39, // Shanghai
         'S','o','u','t','h',' ','G','e','o','r','g','i','a','\0',  46, // South Georgia
                             'S','t',' ','J','o','h','n','s','\0',  21, // St Johns
                                     'S','y','d','n','e','y','\0',  52, // Sydney
                                     'T','a','i','p','e','i','\0',  39, // Taipei
                                 'T','b','i','l','i','s','i','\0',  29, // Tbilisi
                                     'T','e','h','r','a','n','\0',  40, // Tehran
                                 'T','i','j','u','a','n','a','\0',  14, // Tijuana
                                         'T','o','k','y','o','\0',  41, // Tokyo
                         'T','o','n','g','a','t','a','p','u','\0',  63, // Tongatapu
                 'V','l','a','d','i','v','o','s','t','o','k','\0',  42, // Vladivostok
                             'W','i','n','d','h','o','e','k','\0',   3, // Windhoek
                                 'Y','a','k','u','t','s','k','\0',  43, // Yakutsk
         'Y','e','k','a','t','e','r','i','n','b','u','r','g','\0',  37, // Yekaterinburg
                                 'Y','e','r','e','v','a','n','\0',  25, // Yerevan
};
#endif

