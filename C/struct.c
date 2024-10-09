// C program to demonstrate the struct in C programming language.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct;
struct anime{
	char name[20];
	char genre[20];
	int episodes;
};

int main(void)
{
	// Create a anime;
	struct anime my_anime;

	// Fill the Toy with Information;
	strcpy(my_anime.name, "Wind Breaker");
	strcpy(my_anime.genre, "Isekai");
	// you can't use the strcpy function in non-string lines.
	// You just need to assign things here as simple as you down.
	my_anime.episodes = 25;

	printf("[+] Anime Name: %s\n",my_anime.name);
	printf("[+] Anime genre: %s\n",my_anime.genre);
	printf("[+] Total Number of Episodes: %d\n",my_anime.episodes);

	return 0;

}
