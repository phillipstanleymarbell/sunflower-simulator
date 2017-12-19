#define l 0.45
#define THETA0 5
#define START 1


double acceleration[] = {
	-12.11,
	-9.993572251,
	-13.60359912,
	-13.14699062,
	-11.89918066,
	-12.99315767,
	-12.5777828,
	-11.05872325,
	-10.56803323,
	-10.60443926,
	-9.81295953,
	-12.4197289,
	-16.82127982,
	-18.27474041,
	-18.00683732,
	-15.07606391,
	-11.0121567,
	-9.863502679,
	-10.54254325,
	-10.65968585,
	-11.22861746,
	-12.0517736,
	-11.88985264,
	-11.17125941,
	-10.52709759,
	-9.94757708,
	-9.98788675,
	-12.32153178,
	-15.15127166,
	-15.42069203,
	-14.51301454,
	-12.22818305,
	-10.15319422,
	-9.789549824,
	-10.2216476,
	-11.1158485,
	-11.95005075,
	-12.52988173,
	-12.10819237,
	-10.92846453,
	-10.15359348,
	-9.777184646,
	-10.45429388,
	-12.11116049,
	-13.33870067,
	-13.55090296,
	-12.48948743,
	-11.09122685,
	-9.993518271,
	-9.865918359,
	-10.4633832,
	-11.45025713,
	-12.27632973,
	-12.0677195,
	-11.33305802,
	-10.49998201,
	-9.87776182,
	-9.943701289,
	-10.85654229,
	-12.17105388,
	-12.70502022,
	-12.37627881,
	-11.50355962,
	-10.40743384,
	-9.849830945,
	-9.936187982,
	-10.64605248,
	-11.44327448,
	-11.79914162,
	-11.59985716,
	-10.69964379,
	-9.980302546,
	-9.798319934,
	-10.13562932,
	-11.07351629,
	-11.64379965,
	-11.81607803,
	-11.59987891,
	-10.69937068,
	-9.98220754,
	-9.78112925,
	-10.18033958,
	-10.90478222,
	-11.2884341,
	-11.27438172,
	-10.68085589,
	-10.09133747,
	-9.830026235,
	-9.816685031,
	-10.38728881,
	-11.18033319,
	-11.57305545,
	-11.54117725,
	-10.92004146,
	-10.11896995,
	-9.787711143,
	-9.901355531,
	-10.31404398,
	-10.77683096,
	-10.98574626,
	-10.69495134,
	-10.19268774,
	-9.8877386,
	-9.80148095,
	-10.0730764,
	-10.61965551,
	-11.13620106,
	-11.21288385,
	-10.73957067,
	-10.20052689,
	-9.885944881,
	-9.817556687,
	-10.02011102,
	-10.38086218,
	-10.65554899,
	-10.65172067,
	-10.34941219,
	-9.970871049,
	-9.810289064,
	-9.883031785,
	-10.13524427,
	-10.57304047,
	-10.81610667,
	-10.6238403,
	-10.26644256,
	-9.9082368,
	-9.798949698,
	-9.889476784,
	-10.06786008,
	-10.28443778,
	-10.34575386,
	-10.21090571,
	-9.960721673,
	-9.797306954,
	-9.799171308,
	-9.942834724,
	-10.28501373,
	-10.51502664,
	-10.49783101,
	-10.29359011,
	-9.925417522,
	-9.773464091,
	-9.832395918,
	-9.974542613,
	-10.09425214,
	-10.08241933,
	-10.02816813,
	-9.898770492,
	-9.785108208,
	-9.783316227,
	-9.870402456,
	-10.13889106,
	-10.32389364,
	-10.23337638,
	-10.06683098,
	-9.88172316,
	-9.792262287,
	-9.808093923,
	-9.886491372,
	-10.00612495,
	-10.01903419,
	-9.969202779,
	-9.896725589,
	-9.803906046,
	-9.814575857,
	-9.886487478,
	-10.03412852,
	-10.1137419,
	-10.02251129,
	-9.923614804,
	-9.844297231,
	-9.811668755,
	-9.809474539,
	-9.813056463,
	-9.855082156,
	-9.905067038,
	-9.901686389,
	-9.85780898,
	-9.815719905,
	-9.813293762,
	-9.842868965,
	-9.910121558,
	-9.939687517,
	-9.905577462,
	-9.889590736,
	-9.850121175,
	-9.807519806,
	-9.786601714,

};

double angularRate[] = {
	
	-0.502266294,
	0.688544763,
	2.908535376,
	2.723584492,
	2.156321796,
	2.667091497,
	2.494865749,
	1.690139538,
	1.319669345,
	1.336120635,
	0.082050523,
	-2.411102977,
	-3.953576109,
	-4.346236279,
	-4.27702423,
	-3.427715438,
	-1.638010788,
	0.345644901,
	1.284744898,
	1.395789585,
	1.798559583,
	2.247944542,
	2.158304192,
	1.740797015,
	1.263788477,
	0.581633867,
	-0.681210931,
	-2.379916794,
	-3.4544032,
	-3.534745639,
	-3.233038659,
	-2.320088144,
	-0.89759087,
	0.173972057,
	0.997719178,
	1.719234647,
	2.184651893,
	2.458491736,
	2.263557363,
	1.593372757,
	0.918711026,
	0.055610677,
	-1.214629238,
	-2.263426847,
	-2.800502602,
	-2.887704186,
	-2.453030972,
	-1.7117086,
	-0.690631387,
	0.396695682,
	1.206565556,
	1.910524724,
	2.348739014,
	2.255728758,
	1.861987598,
	1.262464093,
	0.416852812,
	-0.545696881,
	-1.528690285,
	-2.300677137,
	-2.551637044,
	-2.404641259,
	-1.952982687,
	-1.15847394,
	-0.297698376,
	0.54749527,
	1.383617226,
	1.926392993,
	2.119995607,
	2.00441965,
	1.408685593,
	0.616968477,
	-0.053684956,
	-0.888445985,
	-1.700225012,
	-2.035117058,
	-2.118450184,
	-1.995012063,
	-1.408253198,
	-0.64948619,
	0.096035295,
	0.951178892,
	1.578088307,
	1.818151137,
	1.803992312,
	1.396012485,
	0.821464105,
	0.351439059,
	-0.304725855,
	-1.153374577,
	-1.748481367,
	-1.979492331,
	-1.967046432,
	-1.589435581,
	-0.87683389,
	-0.149593102,
	0.489833375,
	1.061000559,
	1.466937823,
	1.62628702,
	1.42649558,
	0.966063882,
	0.486439674,
	-0.088316983,
	-0.765607087,
	-1.344606108,
	-1.729041518,
	-1.786874275,
	-1.465113321,
	-0.960331989,
	-0.431560171,
	0.129620703,
	0.695037996,
	1.149530517,
	1.399749174,
	1.395279078,
	1.114808589,
	0.606012558,
	0.042086263,
	-0.433019848,
	-0.886139274,
	-1.333554541,
	-1.518337296,
	-1.357267109,
	-1.009150973,
	-0.472369442,
	0.103662895,
	0.497383787,
	0.80964887,
	1.056082681,
	1.101925446,
	0.944284215,
	0.588056447,
	0.13258921,
	-0.230512993,
	-0.61225943,
	-1.05204112,
	-1.257606761,
	-1.236361154,
	-1.045715182,
	-0.558996167,
	-0.012390936,
	0.352375804,
	0.637522309,
	0.799620944,
	0.779360607,
	0.716336565,
	0.51238547,
	0.166214103,
	-0.087904327,
	-0.405748845,
	-0.856518876,
	-1.071675369,
	-0.989667035,
	-0.802349296,
	-0.491198443,
	-0.136367859,
	0.12844301,
	0.41260789,
	0.670109358,
	0.716654554,
	0.657689186,
	0.520558652,
	0.185484625,
	-0.150191413,
	-0.412772409,
	-0.720967749,
	-0.856759911,
	-0.74456593,
	-0.569870949,
	-0.337168705,
	-0.098033503,
	0.044858756,
	0.195712163,
	0.409995004,
	0.542361172,
	0.517758821,
	0.36535517,
	0.119999124,
	-0.125377313,
	-0.339070512,
	-0.545503963,
	-0.607624732,
	-0.517022376,
	-0.441353313,
	-0.298630857,
	-0.101102876,
	0.017745988,
	
};
