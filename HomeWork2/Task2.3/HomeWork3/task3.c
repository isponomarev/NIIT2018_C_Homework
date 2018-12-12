char* layout(char buf[], int line, int count)
{
	int i;

	for (i = 0; i < count - line; i++)   // Gaps
		buf[i] = ' ';
	for (i = count - line; i < line + count - 1; i++)   // Stars
		buf[i] = '*';	
	buf[i] = '\0';

	return buf;
}