double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double ar;
	switch(ch){
		case 1: ar=M_PI*a[0]*a[0];
				break;
		case 2: ar=a[0]*a[1];
				break;
	}
	return ar;
}