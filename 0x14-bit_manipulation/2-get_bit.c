/**
 * get_bit - a function that gets a bit at index
 * @n: the number to get bit from
 * @index: the index where the bit get at
 * Return: the value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	bin = n >> index;
	bit = bin & 1;
	return (bit);
}
