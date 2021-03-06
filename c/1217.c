// Minimum cost to move chips to the same position

int minCostToMoveChips(int* position, int positionSize){
	int even = 0, odd = 0;
	for (int i = 0; i < positionSize; i++)
	{
		if (position[i] % 2)
			odd++;
		else
			even++;
	}
	if (odd < even)
		return (odd);
	else
		return (even);
}