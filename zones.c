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
{  8, 255, 7, 15,  1,  0, 0, 1, 10, 1}, // 	Brazil	2008	max	-	Oct	Sun>=15	0:00	1:00	S
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	Chatham	2008	max	-	Apr	Sun>=1	2:45s	0	S
{  7, 255, 7,  0,  1,  2, 0, 2,  9, 1}, // 	Chatham	2007	max	-	Sep	lastSun	2:45s	1:00	D
{ 16, 255, 7,  9,  0,  3, 0, 0,  5, 0}, // 	Chile	2016	max	-	May	Sun>=9	3:00u	0	-
{ 16, 255, 7,  9,  0,  4, 0, 1,  8, 1}, // 	Chile	2016	max	-	Aug	Sun>=9	4:00u	1:00	S
{  0, 255, 7,  0,  0,  1, 0, 1,  3, 1}, // 	EU	1981	max	-	Mar	lastSun	 1:00u	1:00	S
{  0, 255, 7,  0,  0,  1, 0, 0, 10, 0}, // 	EU	1996	max	-	Oct	lastSun	 1:00u	0	-
{  8, 255, 7,  1,  1,  1, 0, 1,  4, 0}, // 	LH	2008	max	-	Apr	Sun>=1	2:00	0	S
{  8, 255, 7,  1,  1,  1, 0, 2, 10, 0}, // 	LH	2008	max	-	Oct	Sun>=1	2:00	0:30	D
{  2, 255, 7,  1,  1,  2, 0, 2,  4, 1}, // 	Mexico	2002	max	-	Apr	Sun>=1	2:00	1:00	D
{  2, 255, 7,  0,  1,  1, 0, 1, 10, 0}, // 	Mexico	2002	max	-	Oct	lastSun	2:00	0	S
{  0, 255, 7,  0,  1,  2, 0, 1,  3, 1}, // 	Moldova	1997	max	-	Mar	lastSun	 2:00	1:00	S
{  0, 255, 7,  0,  1,  2, 0, 0, 10, 0}, // 	Moldova	1997	max	-	Oct	lastSun	 3:00	0	-
{  8, 255, 7,  1,  1,  2, 0, 1,  4, 0}, // 	NZ	2008	max	-	Apr	Sun>=1	2:00s	0	S
{  7, 255, 7,  0,  1,  2, 0, 2,  9, 1}, // 	NZ	2007	max	-	Sep	lastSun	2:00s	1:00	D
{  7, 255, 7,  8,  1,  2, 0, 2,  3, 1}, // 	US	2007	max	-	Mar	Sun>=8	2:00	1:00	D
{  7, 255, 7,  1,  1,  1, 0, 1, 11, 0}, // 	US	2007	max	-	Nov	Sun>=1	2:00	0	S
{ 13, 255, 5, 23,  1,  2, 0, 2,  3, 1}, // 	Zion	2013	max	-	Mar	Fri>=23	2:00	1:00	D
{ 13, 255, 7,  0,  1,  1, 0, 1, 10, 0}, // 	Zion	2013	max	-	Oct	lastSun	2:00	0	S
};

const char zone_abrevs[204] = {
'E','E','S','T','\0',
'S','A','S','T','\0',
'C','A','T','\0',
'E','A','T','\0',
'A','R','S','T','\0',
'C','%','c','T','\0',
'A','S','T','\0',
'P','%','c','T','\0',
'A','M','T','\0',
'E','%','c','T','\0',
'F','N','T','\0',
'A','C','T','\0',
'C','L','%','c','T','\0',
'B','R','%','c','T','\0',
'I','C','T','\0',
'B','D','S','T','\0',
'G','S','T','\0',
'H','K','S','T','\0',
'I','%','c','T','\0',
'P','K','S','T','\0',
'N','P','T','\0',
'I','S','T','\0',
'C','S','T','\0',
'W','I','T','A','\0',
'S','G','T','\0',
'J','S','T','\0',
'X','J','T','\0',
'A','C','%','c','T','\0',
'A','E','S','T','\0',
'A','C','S','T','\0',
'L','H','%','c','T','\0',
'A','W','S','T','\0',
'A','E','%','c','T','\0',
'C','E','%','c','T','\0',
'E','E','%','c','T','\0',
'+','0','3','\0',
'G','M','T','/','B','S','T','\0',
'M','S','K','\0',
'N','Z','%','c','T','\0',
'C','H','A','%','c','T','\0',
'E','A','S','%','c','T','\0',
};

const uzone_packed_t zone_defns[43] = {
// Africa/Cairo	2:00	Egypt	EE%sT
{  8,   0,   0,   0},
// Africa/Johannesburg	2:00	SA	SAST
{  8,   0,   0,   5},
// Africa/Maputo	2:00	-	CAT
{  8,   0,   0,  10},
// Africa/Nairobi	3:00	-	EAT
{ 12,   0,   0,  14},
// America/Argentina/Buenos_Aires	-3:00	Arg	AR%sT
{-12,   0,   0,  18},
// America/Chicago	-6:00	US	C%sT
{-24,  28,   2,  23},
// America/Curacao	-4:00	-	AST
// America/Port_of_Spain	-4:00	-	AST
{-16,   0,   0,  28},
// America/Los_Angeles	-8:00	US	P%sT
{-32,  28,   2,  32},
// America/Manaus	-4:00	-	AMT
{-16,   0,   0,  37},
// America/Mexico_City	-6:00	Mexico	C%sT
{-24,  22,   2,  23},
// America/New_York	-5:00	US	E%sT
{-20,  28,   2,  41},
// America/Noronha	-2:00	-	FNT
{ -8,   0,   0,  46},
// America/Rio_Branco	-5:00	-	ACT
{-20,   0,   0,  50},
// America/Santiago	-4:00	Chile	CL%sT
{-16,  16,   2,  54},
// America/Sao_Paulo	-3:00	Brazil	BR%sT
{-12,   4,  10,  60},
// Asia/Bangkok	7:00	-	ICT
// Asia/Ho_Chi_Minh	7:00	-	ICT
{ 28,   0,   0,  66},
// Asia/Dhaka	6:00	Dhaka	BD%sT
{ 24,   0,   0,  70},
// Asia/Dubai	4:00	-	GST
{ 16,   0,   0,  75},
// Asia/Hong_Kong	8:00	HK	HK%sT
{ 32,   0,   0,  79},
// Asia/Jerusalem	2:00	Zion	I%sT
{  8,  30,   2,  84},
// Asia/Karachi	5:00	Pakistan	PK%sT
{ 20,   0,   0,  89},
// Asia/Kathmandu	5:45	-	NPT
{ 23,   0,   0,  94},
// Asia/Kolkata	5:30	-	IST
{ 22,   0,   0,  98},
// Asia/Macau	8:00	PRC	C%sT
// Asia/Shanghai	8:00	PRC	C%sT
{ 32,   0,   0, 102},
// Asia/Makassar	8:00	-	WITA
{ 32,   0,   0, 106},
// Asia/Qatar	3:00	-	AST
// Asia/Riyadh	3:00	-	AST
{ 12,   0,   0,  28},
// Asia/Singapore	8:00	-	SGT
{ 32,   0,   0, 111},
// Asia/Tokyo	9:00	Japan	J%sT
{ 36,   0,   0, 115},
// Asia/Urumqi	6:00	-	XJT
{ 24,   0,   0, 119},
// Australia/Adelaide	9:30	AS	AC%sT
{ 38,   2,   2, 123},
// Australia/Brisbane	10:00	AQ	AE%sT
{ 40,   0,   0, 129},
// Australia/Darwin	9:30	Aus	AC%sT
{ 38,   0,   0, 134},
// Australia/Lord_Howe	10:30	LH	LH%sT
{ 42,  20,   2, 139},
// Australia/Perth	8:00	AW	AW%sT
{ 32,   0,   0, 145},
// Australia/Sydney	10:00	AN	AE%sT
{ 40,   0,   2, 150},
// Europe/Berlin	1:00	EU	CE%sT
// Europe/Madrid	1:00	EU	CE%sT
// Europe/Oslo	1:00	EU	CE%sT
// Europe/Rome	1:00	EU	CE%sT
{  4,  18,   2, 156},
// Europe/Chisinau	2:00	Moldova	EE%sT
{  8,  24,   2, 162},
// Europe/Istanbul	3:00	-	+03
{ 12,   0,   0, 168},
// Europe/London	0:00	EU	GMT/BST
{  0,  18,   2, 172},
// Europe/Moscow	3:00	-	MSK
{ 12,   0,   0, 180},
// Pacific/Auckland	12:00	NZ	NZ%sT
{ 48,  26,   2, 184},
// Pacific/Chatham	12:45	Chatham	CHA%sT
{ 51,  14,   2, 190},
// Pacific/Easter	-6:00	Chile	EAS%sT
{-24,  16,   2, 197},
};

const unsigned char zone_names[1056] = {
                                            'A','d','e','l','a','i','d','e','\0',  29, // Adelaide
                                        'A','h','m','e','d','a','b','a','d','\0',  22, // Ahmedabad
                                                    'A','n','k','a','r','a','\0',  37, // Ankara
                                                        'A','r','u','b','a','\0',   6, // Aruba
                                                'A','t','l','a','n','t','a','\0',  10, // Atlanta
                                            'A','u','c','k','l','a','n','d','\0',  40, // Auckland
                                                'B','a','h','r','a','i','n','\0',  25, // Bahrain
                                        'B','a','n','g','a','l','o','r','e','\0',  22, // Bangalore
                                                'B','a','n','g','k','o','k','\0',  15, // Bangkok
                                        'B','a','r','c','e','l','o','n','a','\0',  35, // Barcelona
                                                'B','e','i','j','i','n','g','\0',  23, // Beijing
                    'B','e','l','o',' ','H','o','r','i','z','o','n','t','e','\0',  14, // Belo Horizonte
                                                    'B','e','r','l','i','n','\0',  35, // Berlin
                                            'B','l','a','n','t','y','r','e','\0',   2, // Blantyre
                                                    'B','o','s','t','o','n','\0',  10, // Boston
                                            'B','r','i','s','b','a','n','e','\0',  30, // Brisbane
                            'B','u','e','n','o','s',' ','A','i','r','e','s','\0',   4, // Buenos Aires
                                                        'C','a','i','r','o','\0',   0, // Cairo
                                        'C','h','a','n','g','z','h','o','u','\0',  23, // Changzhou
                                                'C','h','a','t','h','a','m','\0',  41, // Chatham
                                                'C','h','e','n','g','d','u','\0',  23, // Chengdu
                                                'C','h','e','n','n','a','i','\0',  22, // Chennai
                                                'C','h','i','c','a','g','o','\0',   5, // Chicago
                                            'C','h','i','s','i','n','a','u','\0',  36, // Chisinau
                                        'C','h','o','n','g','q','i','n','g','\0',  23, // Chongqing
                                                'C','u','r','a','c','a','o','\0',   6, // Curacao
            'D','a','l','l','a','s','F','o','r','t',' ','W','o','r','t','h','\0',   5, // DallasFort Worth
                        'D','a','r',' ','e','s',' ','S','a','l','a','a','m','\0',   3, // Dar es Salaam
                                                    'D','a','r','w','i','n','\0',  31, // Darwin
                                                        'D','e','l','h','i','\0',  22, // Delhi
                                                        'D','h','a','k','a','\0',  16, // Dhaka
                                                        'D','u','b','a','i','\0',  17, // Dubai
                                                    'E','a','s','t','e','r','\0',  42, // Easter
                                            'G','a','b','o','r','o','n','e','\0',   2, // Gaborone
                                'G','u','a','d','a','l','a','j','a','r','a','\0',   9, // Guadalajara
                                        'G','u','a','n','g','z','h','o','u','\0',  23, // Guangzhou
                                                'H','a','m','b','u','r','g','\0',  35, // Hamburg
                                            'H','a','n','g','z','h','o','u','\0',  23, // Hangzhou
                                                    'H','a','r','a','r','e','\0',   2, // Harare
                                'H','o',' ','C','h','i',' ','M','i','n','h','\0',  15, // Ho Chi Minh
                                        'H','o','n','g',' ','K','o','n','g','\0',  18, // Hong Kong
                                                'H','o','u','s','t','o','n','\0',   5, // Houston
                                        'H','y','d','e','r','a','b','a','d','\0',  22, // Hyderabad
                        'I','n','l','a','n','d',' ','E','m','p','i','r','e','\0',   7, // Inland Empire
                                            'I','s','t','a','n','b','u','l','\0',  37, // Istanbul
                                        'J','e','r','u','s','a','l','e','m','\0',  19, // Jerusalem
                                                        'J','i','n','a','n','\0',  23, // Jinan
                            'J','o','h','a','n','n','e','s','b','u','r','g','\0',   1, // Johannesburg
                                                'K','a','r','a','c','h','i','\0',  20, // Karachi
                                        'K','a','t','h','m','a','n','d','u','\0',  21, // Kathmandu
                                                'K','o','l','k','a','t','a','\0',  22, // Kolkata
                                                    'K','u','w','a','i','t','\0',  25, // Kuwait
                                                    'L','a','h','o','r','e','\0',  20, // Lahore
                                                    'L','o','n','d','o','n','\0',  38, // London
                                        'L','o','r','d',' ','H','o','w','e','\0',  32, // Lord Howe
                                'L','o','s',' ','A','n','g','e','l','e','s','\0',   7, // Los Angeles
                                                    'L','u','s','a','k','a','\0',   2, // Lusaka
                                                        'M','a','c','a','u','\0',  23, // Macau
                                                    'M','a','d','r','i','d','\0',  35, // Madrid
                                            'M','a','k','a','s','s','a','r','\0',  24, // Makassar
                                                    'M','a','n','a','u','s','\0',   8, // Manaus
                                                    'M','a','p','u','t','o','\0',   2, // Maputo
                                                    'M','a','s','e','r','u','\0',   1, // Maseru
                                                'M','b','a','b','a','n','e','\0',   1, // Mbabane
                                'M','e','x','i','c','o',' ','C','i','t','y','\0',   9, // Mexico City
                                                        'M','i','a','m','i','\0',  10, // Miami
                                                        'M','i','l','a','n','\0',  35, // Milan
                                                    'M','o','s','c','o','w','\0',  39, // Moscow
                                                    'M','u','m','b','a','i','\0',  22, // Mumbai
                                                    'M','u','n','i','c','h','\0',  35, // Munich
                                                    'M','u','s','c','a','t','\0',  17, // Muscat
                                                    'N','a','g','o','y','a','\0',  27, // Nagoya
                                                'N','a','i','r','o','b','i','\0',   3, // Nairobi
                                            'N','a','n','c','h','a','n','g','\0',  23, // Nanchang
                                                'N','a','n','j','i','n','g','\0',  23, // Nanjing
                                            'N','e','w',' ','Y','o','r','k','\0',  10, // New York
                                                'N','o','r','o','n','h','a','\0',  11, // Noronha
                                                        'O','s','a','k','a','\0',  27, // Osaka
                                                            'O','s','l','o','\0',  35, // Oslo
                                                        'P','e','r','t','h','\0',  33, // Perth
                            'P','h','i','l','a','d','e','l','p','h','i','a','\0',  10, // Philadelphia
                                                            'P','u','n','e','\0',  22, // Pune
                                                        'Q','a','t','a','r','\0',  25, // Qatar
                                                'Q','i','n','g','d','a','o','\0',  23, // Qingdao
                                    'R','h','i','n','e','-','R','u','h','r','\0',  35, // Rhine-Ruhr
                                    'R','i','o',' ','B','r','a','n','c','o','\0',  12, // Rio Branco
                    'R','i','o',' ','d','e',' ','J','a','n','e','i','r','o','\0',  14, // Rio de Janeiro
                                                    'R','i','y','a','d','h','\0',  25, // Riyadh
                                                            'R','o','m','e','\0',  35, // Rome
                        'S','a','n',' ','F','r','a','n','c','i','s','c','o','\0',   7, // San Francisco
                                            'S','a','n','t','i','a','g','o','\0',  13, // Santiago
                                        'S','a','o',' ','P','a','u','l','o','\0',  14, // Sao Paulo
                                            'S','h','a','n','g','h','a','i','\0',  23, // Shanghai
                                            'S','h','e','n','y','a','n','g','\0',  23, // Shenyang
                                            'S','h','e','n','z','h','e','n','\0',  23, // Shenzhen
                                        'S','i','n','g','a','p','o','r','e','\0',  26, // Singapore
                        'S','t',' ','B','a','r','t','h','e','l','e','m','y','\0',   6, // St Barthelemy
                                        'S','t','u','t','t','g','a','r','t','\0',  35, // Stuttgart
                                                        'S','u','r','a','t','\0',  22, // Surat
                                                    'S','y','d','n','e','y','\0',  34, // Sydney
                                                'T','i','a','n','j','i','n','\0',  23, // Tianjin
                                                        'T','o','k','y','o','\0',  27, // Tokyo
                                                'T','o','r','t','o','l','a','\0',   6, // Tortola
                                                    'U','r','u','m','q','i','\0',  28, // Urumqi
            'W','a','s','h','i','n','g','t','o','n',',',' ','D','.','C','.','\0',  10, // Washington, D.C.
                                                'W','e','n','z','h','o','u','\0',  23, // Wenzhou
                                                        'W','u','h','a','n','\0',  23, // Wuhan
                                                       'X','i','\'','a','n','\0',  23, // Xi'an
                                        'Z','h','e','n','g','z','h','o','u','\0',  23, // Zhengzhou
};
