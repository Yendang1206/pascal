//define the function for pascal triangle

int factorial(int n) {
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}


int binomial(int n, int k) {
	return factorial(n) / (factorial(k) * factorial(n - k));
}

