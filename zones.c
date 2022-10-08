#include "utz.h"

const urule_packed_t zone_rules[32] = {
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	AN	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  8, 255, 7,  1,  1,  2, 0, 2, 10, 1}, // 	AN	2008	max	-	Oct	Sun>=1	2:00s	1:00	D
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	AS	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  8, 255, 7,  1,  1,  2, 0, 2, 10, 1}, // 	AS	2008	max	-	Oct	Sun>=1	2:00s	1:00	D
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
{  8, 255, 7,  1,  1,  2, 0, 0,  4, 0}, // 	Chatham	2008	max	-	Apr	Sun>=1	2:45s	0	-
{  7, 255, 7,  0,  1,  2, 0, 0,  9, 1}, // 	Chatham	2007	max	-	Sep	lastSun	2:45s	1:00	-
{ 16, 255, 7,  9,  0,  3, 0, 0,  5, 0}, // 	Chile	2016	max	-	May	Sun>=9	3:00u	0	-
{ 16, 255, 7,  9,  0,  4, 0, 0,  8, 1}, // 	Chile	2016	max	-	Aug	Sun>=9	4:00u	1:00	-
{  0, 255, 7,  0,  0,  1, 0, 1,  3, 1}, // 	EU	1981	max	-	Mar	lastSun	 1:00u	1:00	S
{  0, 255, 7,  0,  0,  1, 0, 0, 10, 0}, // 	EU	1996	max	-	Oct	lastSun	 1:00u	0	-
{ 14, 255, 4,  0,  1, 24, 0, 1,  3, 1}, // 	Jordan	2014	max	-	Mar	lastThu	24:00	1:00	S
{ 14, 255, 5,  0,  1,  0, 0, 0, 10, 0}, // 	Jordan	2014	max	-	Oct	lastFri	0:00s	0	-
{  8, 255, 7,  1,  1,  1, 0, 0,  4, 0}, // 	LH	2008	max	-	Apr	Sun>=1	2:00	0	-
{  8, 255, 7,  1,  1,  1, 0, 0, 10, 0}, // 	LH	2008	max	-	Oct	Sun>=1	2:00	0:30	-
{  0, 255, 7,  0,  1,  2, 0, 1,  3, 1}, // 	Moldova	1997	max	-	Mar	lastSun	 2:00	1:00	S
{  0, 255, 7,  0,  1,  2, 0, 0, 10, 0}, // 	Moldova	1997	max	-	Oct	lastSun	 3:00	0	-
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	NZ	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  7, 255, 7,  0,  1,  2, 0, 2,  9, 1}, // 	NZ	2007	max	-	Sep	lastSun	2:00s	1:00	D
{ 13, 255, 6, 21,  1, 23, 0, 0,  3, 0}, // 	Para	2013	max	-	Mar	Sun>=22	0:00	0	-
{ 10, 255, 7,  1,  1,  0, 0, 0, 10, 1}, // 	Para	2010	max	-	Oct	Sun>=1	0:00	1:00	-
{ 13, 255, 5, 23,  1,  2, 0, 2,  3, 1}, // 	Zion	2013	max	-	Mar	Fri>=23	2:00	1:00	D
{ 13, 255, 7,  0,  1,  1, 0, 1, 10, 0}, // 	Zion	2013	max	-	Oct	lastSun	2:00	0	S
};


#ifndef UTZ_TIGHT
const char zone_abrevs[294] = {
'E','E','S','T','\0',
'S','A','S','T','\0',
'C','A','T','\0',
'E','A','T','\0',
'C','E','S','T','\0',
'S','\0',
'-','0','3','/','-','0','2','\0',
'-','0','3','\0',
'-','0','4','/','-','0','3','\0',
'-','0','5','/','-','0','4','\0',
'C','S','T','\0',
'A','S','T','\0',
'-','0','4','\0',
'-','0','2','\0',
'-','0','5','\0',
'+','1','1','\0',
'+','0','6','\0',
'E','E','%','c','T','\0',
'+','1','2','\0',
'+','0','5','\0',
'+','0','3','/','+','0','4','\0',
'+','0','4','/','+','0','5','\0',
'+','0','7','\0',
'+','0','8','\0',
'+','0','9','\0',
'+','0','5','3','0','\0',
'+','0','6','/','+','0','7','\0',
'+','0','4','\0',
'H','K','S','T','\0',
'W','I','B','\0',
'W','I','T','\0',
'I','%','c','T','\0',
'P','K','S','T','\0',
'+','0','5','4','5','\0',
'W','I','T','A','\0',
'+','0','8','/','+','0','9','\0',
'+','0','3','\0',
'+','1','0','\0',
'W','E','%','c','T','\0',
'A','C','%','c','T','\0',
'A','E','S','T','\0',
'A','C','S','T','\0',
'+','0','8','4','5','/','+','0','9','4','5','\0',
'+','1','0','3','0','/','+','1','1','\0',
'A','W','S','T','\0',
'A','E','%','c','T','\0',
'C','E','%','c','T','\0',
'E','E','T','\0',
'G','M','T','/','B','S','T','\0',
'M','S','K','\0',
'N','Z','%','c','T','\0',
'+','1','2','4','5','/','+','1','3','4','5','\0',
'-','0','6','/','-','0','5','\0',
};

#endif

const uzone_packed_t zone_defns[61] = {
// Africa/Cairo	2:00	Egypt	EE%sT
{  8,   0,   0,   0},
// Africa/Johannesburg	2:00	SA	SAST
{  8,   0,   0,   5},
// Africa/Maputo	2:00	-	CAT
{  8,   0,   0,  10},
// Africa/Nairobi	3:00	-	EAT
{ 12,   0,   0,  14},
// Africa/Tunis	1:00	Tunisia	CE%sT
{  4,   0,   0,  18},
// Africa/Windhoek	2:00	Namibia	%s
{  8,   0,   0,  23},
// America/Argentina/Buenos_Aires	-3:00	Arg	-03/-02
// America/Montevideo	-3:00	Uruguay	-03/-02
{-12,   0,   0,  25},
// America/Argentina/San_Luis	-3:00	-	-03
// America/Bahia	-3:00	-	-03
{-12,   0,   0,  33},
// America/Asuncion	-4:00	Para	-04/-03
{-16,  28,   2,  37},
// America/Belize	-6:00	Belize	%s
{-24,   0,   0,  23},
// America/Bogota	-5:00	CO	-05/-04
// America/Lima	-5:00	Peru	-05/-04
{-20,   0,   0,  45},
// America/Costa_Rica	-6:00	CR	C%sT
// America/Guatemala	-6:00	Guat	C%sT
// America/Managua	-6:00	Nic	C%sT
// America/Tegucigalpa	-6:00	Hond	C%sT
{-24,   0,   0,  53},
// America/Cuiaba	-4:00	Brazil	-04/-03
{-16,   4,  10,  37},
// America/Curacao	-4:00	-	AST
{-16,   0,   0,  57},
// America/La_Paz	-4:00	-	-04
// America/Manaus	-4:00	-	-04
{-16,   0,   0,  61},
// America/Noronha	-2:00	-	-02
{ -8,   0,   0,  65},
// America/Rio_Branco	-5:00	-	-05
{-20,   0,   0,  69},
// America/Santiago	-4:00	Chile	-04/-03
{-16,  16,   2,  37},
// America/Sao_Paulo	-3:00	Brazil	-03/-02
{-12,   4,  10,  25},
// Antarctica/Macquarie	11:00	-	+11
// Asia/Magadan	11:00	-	+11
// Asia/Sakhalin	11:00	-	+11
// Asia/Srednekolymsk	11:00	-	+11
{ 44,   0,   0,  73},
// Asia/Almaty	6:00	-	+06
// Asia/Omsk	6:00	-	+06
// Asia/Urumqi	6:00	-	+06
{ 24,   0,   0,  77},
// Asia/Amman	2:00	Jordan	EE%sT
{  8,  20,   2,  81},
// Asia/Anadyr	12:00	-	+12
// Asia/Kamchatka	12:00	-	+12
{ 48,   0,   0,  87},
// Asia/Aqtobe	5:00	-	+05
// Asia/Oral	5:00	-	+05
// Asia/Tashkent	5:00	-	+05
// Asia/Yekaterinburg	5:00	-	+05
{ 20,   0,   0,  91},
// Asia/Baghdad	3:00	Iraq	+03/+04
{ 12,   0,   0,  95},
// Asia/Baku	4:00	Azer	+04/+05
// Indian/Mauritius	4:00	Mauritius	+04/+05
{ 16,   0,   0, 103},
// Asia/Bangkok	7:00	-	+07
// Asia/Barnaul	7:00	-	+07
// Asia/Ho_Chi_Minh	7:00	-	+07
// Asia/Krasnoyarsk	7:00	-	+07
// Asia/Novosibirsk	7:00	-	+07
{ 28,   0,   0, 111},
// Asia/Brunei	8:00	-	+08
// Asia/Irkutsk	8:00	-	+08
// Asia/Kuala_Lumpur	8:00	-	+08
// Asia/Singapore	8:00	-	+08
{ 32,   0,   0, 115},
// Asia/Chita	9:00	-	+09
{ 36,   0,   0, 119},
// Asia/Colombo	5:30	-	+0530
{ 22,   0,   0, 123},
// Asia/Dhaka	6:00	Dhaka	+06/+07
{ 24,   0,   0, 129},
// Asia/Dubai	4:00	-	+04
// Europe/Samara	4:00	-	+04
// Europe/Saratov	4:00	-	+04
{ 16,   0,   0, 137},
// Asia/Hong_Kong	8:00	HK	HK%sT
{ 32,   0,   0, 141},
// Asia/Jakarta	7:00	-	WIB
{ 28,   0,   0, 146},
// Asia/Jayapura	9:00	-	WIT
{ 36,   0,   0, 150},
// Asia/Jerusalem	2:00	Zion	I%sT
{  8,  30,   2, 154},
// Asia/Karachi	5:00	Pakistan	PK%sT
{ 20,   0,   0, 159},
// Asia/Kathmandu	5:45	-	+0545
{ 23,   0,   0, 164},
// Asia/Macau	8:00	Macau	C%sT
// Asia/Shanghai	8:00	PRC	C%sT
{ 32,   0,   0,  53},
// Asia/Makassar	8:00	-	WITA
{ 32,   0,   0, 170},
// Asia/Manila	8:00	Phil	+08/+09
{ 32,   0,   0, 175},
// Asia/Qatar	3:00	-	+03
// Asia/Riyadh	3:00	-	+03
// Europe/Kirov	3:00	-	+03
// Europe/Minsk	3:00	-	+03
{ 12,   0,   0, 183},
// Asia/Vladivostok	10:00	-	+10
{ 40,   0,   0, 187},
// Atlantic/Canary	0:00	EU	WE%sT
{  0,  18,   2, 191},
// Australia/Adelaide	9:30	AS	AC%sT
{ 38,   2,   2, 197},
// Australia/Brisbane	10:00	AQ	AE%sT
{ 40,   0,   0, 203},
// Australia/Darwin	9:30	Aus	AC%sT
{ 38,   0,   0, 208},
// Australia/Eucla	8:45	AW	+0845/+0945
{ 35,   0,   0, 213},
// Australia/Lord_Howe	10:30	LH	+1030/+11
{ 42,  22,   2, 225},
// Australia/Perth	8:00	AW	AW%sT
{ 32,   0,   0, 235},
// Australia/Sydney	10:00	AN	AE%sT
{ 40,   0,   2, 240},
// Europe/Amsterdam	1:00	EU	CE%sT
// Europe/Berlin	1:00	EU	CE%sT
// Europe/Madrid	1:00	EU	CE%sT
// Europe/Oslo	1:00	EU	CE%sT
// Europe/Paris	1:00	EU	CE%sT
// Europe/Rome	1:00	EU	CE%sT
{  4,  18,   2, 246},
// Europe/Chisinau	2:00	Moldova	EE%sT
{  8,  24,   2,  81},
// Europe/Kaliningrad	2:00	-	EET
{  8,   0,   0, 252},
// Europe/Kiev	2:00	EU	EE%sT
{  8,  18,   2,  81},
// Europe/London	0:00	EU	GMT/BST
{  0,  18,   2, 256},
// Europe/Moscow	3:00	-	MSK
{ 12,   0,   0, 264},
// Pacific/Auckland	12:00	NZ	NZ%sT
{ 48,  26,   2, 268},
// Pacific/Chatham	12:45	Chatham	+1245/+1345
{ 51,  14,   2, 274},
// Pacific/Easter	-6:00	Chile	-06/-05
{-24,  16,   2, 286},
// Pacific/Galapagos	-6:00	Ecuador	-06/-05
{-24,   0,   0, 286},
};

#ifndef UTZ_TIGHT
const unsigned char zone_names[990] = {
                             'A','d','e','l','a','i','d','e','\0',  44, // Adelaide
                                     'A','l','m','a','t','y','\0',  20, // Almaty
                                         'A','m','m','a','n','\0',  21, // Amman
                         'A','m','s','t','e','r','d','a','m','\0',  51, // Amsterdam
                                     'A','n','a','d','y','r','\0',  22, // Anadyr
                                     'A','q','t','o','b','e','\0',  23, // Aqtobe
                                         'A','r','u','b','a','\0',  13, // Aruba
                             'A','s','u','n','c','i','o','n','\0',   8, // Asuncion
                             'A','u','c','k','l','a','n','d','\0',  57, // Auckland
                                 'B','a','g','h','d','a','d','\0',  24, // Baghdad
                                         'B','a','h','i','a','\0',   7, // Bahia
                                 'B','a','h','r','a','i','n','\0',  41, // Bahrain
                                             'B','a','k','u','\0',  25, // Baku
                                 'B','a','n','g','k','o','k','\0',  26, // Bangkok
                                 'B','a','r','n','a','u','l','\0',  26, // Barnaul
                                     'B','e','l','i','z','e','\0',   9, // Belize
                                     'B','e','r','l','i','n','\0',  51, // Berlin
                             'B','l','a','n','t','y','r','e','\0',   2, // Blantyre
                                     'B','o','g','o','t','a','\0',  10, // Bogota
                             'B','r','i','s','b','a','n','e','\0',  45, // Brisbane
                                     'B','r','u','n','e','i','\0',  27, // Brunei
             'B','u','e','n','o','s',' ','A','i','r','e','s','\0',   6, // Buenos Aires
                                         'C','a','i','r','o','\0',   0, // Cairo
                                     'C','a','n','a','r','y','\0',  43, // Canary
                                 'C','h','a','t','h','a','m','\0',  58, // Chatham
                             'C','h','i','s','i','n','a','u','\0',  52, // Chisinau
                                         'C','h','i','t','a','\0',  28, // Chita
                                 'C','o','l','o','m','b','o','\0',  29, // Colombo
                     'C','o','s','t','a',' ','R','i','c','a','\0',  11, // Costa Rica
                                     'C','u','i','a','b','a','\0',  12, // Cuiaba
                                 'C','u','r','a','c','a','o','\0',  13, // Curacao
         'D','a','r',' ','e','s',' ','S','a','l','a','a','m','\0',   3, // Dar es Salaam
                                     'D','a','r','w','i','n','\0',  46, // Darwin
                                         'D','h','a','k','a','\0',  30, // Dhaka
                                         'D','u','b','a','i','\0',  31, // Dubai
                                     'E','a','s','t','e','r','\0',  59, // Easter
                                         'E','u','c','l','a','\0',  47, // Eucla
                             'G','a','b','o','r','o','n','e','\0',   2, // Gaborone
                         'G','a','l','a','p','a','g','o','s','\0',  60, // Galapagos
                         'G','u','a','t','e','m','a','l','a','\0',  11, // Guatemala
                                     'H','a','r','a','r','e','\0',   2, // Harare
                 'H','o',' ','C','h','i',' ','M','i','n','h','\0',  26, // Ho Chi Minh
                         'H','o','n','g',' ','K','o','n','g','\0',  32, // Hong Kong
                                 'I','r','k','u','t','s','k','\0',  27, // Irkutsk
                                 'J','a','k','a','r','t','a','\0',  33, // Jakarta
                             'J','a','y','a','p','u','r','a','\0',  34, // Jayapura
                         'J','e','r','u','s','a','l','e','m','\0',  35, // Jerusalem
             'J','o','h','a','n','n','e','s','b','u','r','g','\0',   1, // Johannesburg
                 'K','a','l','i','n','i','n','g','r','a','d','\0',  53, // Kaliningrad
                         'K','a','m','c','h','a','t','k','a','\0',  22, // Kamchatka
                                 'K','a','r','a','c','h','i','\0',  36, // Karachi
                         'K','a','t','h','m','a','n','d','u','\0',  37, // Kathmandu
                                             'K','i','e','v','\0',  54, // Kiev
                                         'K','i','r','o','v','\0',  41, // Kirov
                 'K','r','a','s','n','o','y','a','r','s','k','\0',  26, // Krasnoyarsk
             'K','u','a','l','a',' ','L','u','m','p','u','r','\0',  27, // Kuala Lumpur
                                     'K','u','w','a','i','t','\0',  41, // Kuwait
                                     'L','a',' ','P','a','z','\0',  14, // La Paz
                                             'L','i','m','a','\0',  10, // Lima
                                     'L','o','n','d','o','n','\0',  55, // London
                         'L','o','r','d',' ','H','o','w','e','\0',  48, // Lord Howe
                                     'L','u','s','a','k','a','\0',   2, // Lusaka
                                         'M','a','c','a','u','\0',  38, // Macau
                         'M','a','c','q','u','a','r','i','e','\0',  19, // Macquarie
                                     'M','a','d','r','i','d','\0',  51, // Madrid
                                 'M','a','g','a','d','a','n','\0',  19, // Magadan
                             'M','a','k','a','s','s','a','r','\0',  39, // Makassar
                                 'M','a','n','a','g','u','a','\0',  11, // Managua
                                     'M','a','n','a','u','s','\0',  14, // Manaus
                                     'M','a','n','i','l','a','\0',  40, // Manila
                                     'M','a','p','u','t','o','\0',   2, // Maputo
                                     'M','a','s','e','r','u','\0',   1, // Maseru
                         'M','a','u','r','i','t','i','u','s','\0',  25, // Mauritius
                                 'M','b','a','b','a','n','e','\0',   1, // Mbabane
                                         'M','i','n','s','k','\0',  41, // Minsk
                     'M','o','n','t','e','v','i','d','e','o','\0',   6, // Montevideo
                                     'M','o','s','c','o','w','\0',  56, // Moscow
                                     'M','u','s','c','a','t','\0',  31, // Muscat
                                 'N','a','i','r','o','b','i','\0',   3, // Nairobi
                                 'N','o','r','o','n','h','a','\0',  15, // Noronha
                 'N','o','v','o','s','i','b','i','r','s','k','\0',  26, // Novosibirsk
                                             'O','m','s','k','\0',  20, // Omsk
                                             'O','r','a','l','\0',  23, // Oral
                                             'O','s','l','o','\0',  51, // Oslo
                                         'P','a','r','i','s','\0',  51, // Paris
                                         'P','e','r','t','h','\0',  49, // Perth
                                         'Q','a','t','a','r','\0',  41, // Qatar
                     'R','i','o',' ','B','r','a','n','c','o','\0',  16, // Rio Branco
                                     'R','i','y','a','d','h','\0',  41, // Riyadh
                                             'R','o','m','e','\0',  51, // Rome
                             'S','a','k','h','a','l','i','n','\0',  19, // Sakhalin
                                     'S','a','m','a','r','a','\0',  31, // Samara
                             'S','a','n',' ','L','u','i','s','\0',   7, // San Luis
                             'S','a','n','t','i','a','g','o','\0',  17, // Santiago
                         'S','a','o',' ','P','a','u','l','o','\0',  18, // Sao Paulo
                                 'S','a','r','a','t','o','v','\0',  31, // Saratov
                             'S','h','a','n','g','h','a','i','\0',  38, // Shanghai
                         'S','i','n','g','a','p','o','r','e','\0',  27, // Singapore
         'S','r','e','d','n','e','k','o','l','y','m','s','k','\0',  19, // Srednekolymsk
                                     'S','y','d','n','e','y','\0',  50, // Sydney
                             'T','a','s','h','k','e','n','t','\0',  23, // Tashkent
                 'T','e','g','u','c','i','g','a','l','p','a','\0',  11, // Tegucigalpa
                                         'T','u','n','i','s','\0',   4, // Tunis
                                     'U','r','u','m','q','i','\0',  20, // Urumqi
                 'V','l','a','d','i','v','o','s','t','o','k','\0',  42, // Vladivostok
                             'W','i','n','d','h','o','e','k','\0',   5, // Windhoek
         'Y','e','k','a','t','e','r','i','n','b','u','r','g','\0',  23, // Yekaterinburg
};
#endif

