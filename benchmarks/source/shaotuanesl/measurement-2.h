#define L 0.1
#define THETA0 5
#define STARTSIGN -1
#define GCOSSIGN  ? -1 : 1
#define THRESHOLD 0.02

double acceleration[] = {
	-9.770898,
	-9.766672,
	-9.770842,
	-9.773954,
	-9.769031,
	-9.76607,
	-9.77071,
	-9.772675,
	-9.816317,
	-9.85214,
	-9.774437,
	-9.831465,
	-9.818206,
	-9.777526,
	-9.797795,
	-9.838834,
	-9.781586,
	-9.802683,
	-9.815384,
	-9.787777,
	-9.801776,
	-9.824968,
	-9.794776,
	-9.783875,
	-9.809954,
	-9.802066,
	-9.772747,
	-9.79995,
	-9.812172,
	-9.785635,
	-9.794366,
	-9.816803,
	-9.780145,
	-9.785876,
	-9.813944,
	-9.789288,
	-9.779901,
	-9.813481,
	-9.793507,
	-9.776321,
	-9.814372,
	-9.795508,
	-9.77527,
	-9.80628,
	-9.801828,
	-9.772852,
	-9.799093,
	-9.80629,
	-9.774644,
	-9.792571,
	-9.810519,
	-9.778481,
	-9.784913,
	-9.811959,
	-9.786848,
	-9.778827,
	-9.809833,
	-9.79122,
	-9.774934,
	-9.806862,
	-9.796848,

};

double angularRate[] = {
	-0.00818,
	-0.016118,
	-0.003006,
	-0.007505,
	-0.007948,
	-0.016026,
	-0.004018,
	-0.007726,
	-0.502667,
	-0.72065,
	-0.099844,
	0.524335,
	0.385657,
	-0.004009,
	-0.290816,
	-0.585472,
	0.027576,
	0.386731,
	0.255304,
	-0.01304,
	-0.481757,
	-0.325182,
	-0.023892,
	0.327578,
	0.263952,
	0.119939,
	-0.023904,
	-0.18008,
	-0.275857,
	-0.323905,
	-0.191965,
	0.12,
	0.288044,
	0.052212,
	-0.27509,
	-0.284762,
	-0.042044,
	0.277056,
	0.223022,
	-0.090412,
	-0.252126,
	-0.210352,
	0.106816,
	0.243155,
	0.078439,
	-0.140498,
	-0.24994,
	-0.075542,
	0.171121,
	0.145529,
	0.002188,
	-0.119981,
	-0.168034,
	-0.213617,
	-0.159053,
	0.041225,
	0.154398,
	0.080206,
	-0.101495,
	-0.165689,
	-0.063227,

};


