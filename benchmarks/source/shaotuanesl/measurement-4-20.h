#define L 0.45
#define THETA0 20
#define STARTSIGN 1
#define GCOSSIGN  ? 1 : -1
#define THRESHOLD 0.7




double acceleration[] = {
	-9.431727,
	-12.399285,
	-13.445636,
	-14.275948,
	-13.72055,
	-13.296616,
	-10.569104,
	-10.611429,
	-10.625562,
	-10.670817,
	-12.424916,
	-16.743053,
	-17.951441,
	-17.476488,
	-14.542389,
	-10.681742,
	-9.780205,
	-10.548609,
	-10.563713,
	-10.836373,
	-11.49674,
	-11.395379,
	-10.912801,
	-10.490203,
	-9.93624,
	-9.785179,
	-11.867734,
	-14.589129,
	-14.979255,
	-14.32541,
	-12.222218,
	-10.107324,
	-9.515432,
	-9.717557,
	-10.564627,
	-11.572161,
	-12.407462,
	-12.115655,
	-10.833201,
	-9.807964,
	-9.237207,
	-9.931347,
	-11.803326,
	-13.271576,
	-13.553414,
	-12.333197,
	-10.678534,
	-9.434294,
	-9.386853,
	-10.227658,
	-11.42493,
	-12.255844,
	-11.842734,
	-10.861983,
	-9.939352,
	-9.455451,
	-9.77752,
	-10.856778,
	-12.111044,
	-12.408092,
	-11.859162,
	-10.95946,
	-10.051186,
	-9.746142,
	-9.94408,
	-10.532583,
	-11.07576,
	-11.251204,
	-11.089204,
	-10.414596,
	-9.927994,
	-9.795464,
	-9.958254,
	-10.641245,
	-11.082176,
	-11.353713,
	-11.386628,
	-10.683977,
	-9.950913,
	-9.533539,
	-9.693226,
	-10.347465,
	-10.886184,
	-11.128916,
	-10.685494,
	-10.015788,
	-9.510425,
	-9.288072,
	-9.85201,
	-10.846244,
	-11.486982,
	-11.547651,
	-10.787319,
	-9.730155,
	-9.233533,
	-9.404485,
	-10.051842,
	-10.737889,
	-10.975748,
	-10.495858,
	-9.741835,
	-9.325522,
	-9.357003,
	-9.881898,
	-10.612504,
	-11.092512,
	-10.94251,
	-10.237756,
	-9.648301,
	-9.504563,
	-9.691967,
	-10.027327,
	-10.288478,
	-10.313556,
	-10.113209,
	-9.824597,
	-9.659314,
	-9.740601,
	-9.886251,
	-9.982344,
	-10.163647,
	-10.257446,
	-10.142156,
	-10.027001,
	-9.88112,
	-9.78008,
	-9.668172,
	-9.599537,
	-9.723436,
	-9.920237,
	-10.041255,
	-9.960062,
	-9.739715,
	-9.50598,
	-9.427752,
	-9.739627,
	-10.155191,
	-10.391143,
	-10.301539,
	-9.81501,
	-9.409503,
	-9.285647,
	-9.461768,
	-9.805457,
	-10.027778,
	-10.026316,
	-9.724901,
	-9.355985,
	-9.221963,
	-9.405214,
	-9.921977,
	-10.306985,
	-10.203965,
	-9.822965,
	-9.397151,
	-9.234278,
	-9.402494,
	-9.737682,
	-10.010166,
	-9.946125,
	-9.653306,
	-9.369891,
	-9.267065,
	-9.476822,
	-9.797605,
	-10.040963,
	-9.984244,
	-9.637144,
	-9.370341,
	-9.345067,
	-9.545722,
	-9.768444,
	-9.80435,
	-9.659588,
	-9.457189,
	-9.339442,
	-9.41032,
	-9.620954,
	-9.80491,
	-9.801318,
	-9.643492,
	-9.44019,
	-9.352395,
	-9.504736,
	-9.721333,
	-9.814439,


};

double angularRate[] = {
	
	0.45903,
	1.739023,
	1.949056,
	2.104215,
	1.978061,
	1.929911,
	1.12676,
	0.879779,
	0.890747,
	0.054701,
	-1.607402,
	-2.635717,
	-2.897491,
	-2.851349,
	-2.285143,
	-1.092007,
	0.23043,
	0.856497,
	0.930527,
	1.19904,
	1.49863,
	1.438869,
	1.160531,
	0.842525,
	0.387756,
	-0.454141,
	-1.586611,
	-2.302935,
	-2.356497,
	-2.155359,
	-1.546725,
	-0.598394,
	0.115981,
	0.665146,
	1.146157,
	1.456435,
	1.638995,
	1.509038,
	1.062249,
	0.612474,
	0.037074,
	-0.809753,
	-1.508951,
	-1.867002,
	-1.925136,
	-1.635354,
	-1.141139,
	-0.460421,
	0.264464,
	0.804377,
	1.273683,
	1.565826,
	1.503819,
	1.241325,
	0.841643,
	0.277902,
	-0.363798,
	-1.019127,
	-1.533785,
	-1.701091,
	-1.603094,
	-1.301989,
	-0.772316,
	-0.198465,
	0.364997,
	0.922411,
	1.284262,
	1.413331,
	1.33628,
	0.939124,
	0.411312,
	-0.03579,
	-0.592297,
	-1.133483,
	-1.356745,
	-1.4123,
	-1.330008,
	-0.938835,
	-0.432991,
	0.064023,
	0.634119,
	1.052059,
	1.212101,
	1.202661,
	0.930675,
	0.547643,
	0.234293,
	-0.203151,
	-0.768917,
	-1.165654,
	-1.319661,
	-1.311364,
	-1.059624,
	-0.584556,
	-0.099729,
	0.326555,
	0.707334,
	0.977959,
	1.084191,
	0.950997,
	0.644043,
	0.324293,
	-0.058878,
	-0.510405,
	-0.896404,
	-1.152695,
	-1.191249,
	-0.976742,
	-0.640221,
	-0.287707,
	0.086414,
	0.463359,
	0.766354,
	0.933166,
	0.930186,
	0.743206,
	0.404009,
	0.028057,
	-0.28868,
	-0.590759,
	-0.889037,
	-1.012225,
	-0.904845,
	-0.672767,
	-0.314913,
	0.069109,
	0.331589,
	0.539766,
	0.704055,
	0.734617,
	0.629523,
	0.392037,
	0.088393,
	-0.153675,
	-0.408173,
	-0.701361,
	-0.838405,
	-0.824241,
	-0.697143,
	-0.372664,
	-0.008261,
	0.234917,
	0.425015,
	0.533081,
	0.519574,
	0.477558,
	0.34159,
	0.110809,
	-0.058603,
	-0.270499,
	-0.571013,
	-0.71445,
	-0.659778,
	-0.534899,
	-0.327465,
	-0.090912,
	0.085629,
	0.275072,
	0.446739,
	0.47777,
	0.438459,
	0.347039,
	0.123657,
	-0.100127,
	-0.275181,
	-0.480645,
	-0.571173,
	-0.496377,
	-0.379914,
	-0.224779,
	-0.065356,
	0.029906,
	0.130475,
	0.27333,
	0.361574,
	0.345173,
	0.24357,
	0.079999,
	-0.083585,
	-0.226047,
	-0.363669,
	-0.405083,
	-0.344681,
	-0.294235,
	-0.199087,
	-0.067402,
	
};