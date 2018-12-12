float convert(int feet, int inches)
{
	float height;	

	height = (feet * 12 + inches) * 2.54;

	return height;
}