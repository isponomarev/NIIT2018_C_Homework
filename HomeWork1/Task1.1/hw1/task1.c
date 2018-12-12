int getRecommendation(char gender, float height, float weight)
{
	float idealWeight;

	if (gender == 'M')
		idealWeight = height - 100;
	else idealWeight = height - 110;

	if (weight == idealWeight)
		return 0;
	else if (weight > idealWeight)
		return 1;
	else return -1;
}