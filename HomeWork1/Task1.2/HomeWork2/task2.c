char* greet(int hour, int min)
{
	if ((hour < 0) || (min < 0) || (hour >= 24) || (min > 59))
		return "Uncorrect time! \n";
	else if ((hour >= 0) && (hour < 6))
		return "Good Night! \n";
	else if ((hour >= 6) && (hour < 11))
		return "Good Morning! \n";
	else if ((hour >= 11) && (hour < 18))
		return "Good Day! \n";
	else if ((hour >= 18) && (hour < 24))
		return "Good Evening! \n";
}