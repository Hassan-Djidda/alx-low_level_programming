/**
 * *_strncat - oncatenates n bytes of strings
 * @dest: pointer destination
 * @src: pointer source
 * @n :number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_leng, i;

	for (dest_leng = 0; dest[dest_leng] != '\0';  dest_leng++)
		;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_leng + i] = src[i];

	/*should end with end of string char */
	dest[dest_leng + i] = '\0';

	return (dest);
}
