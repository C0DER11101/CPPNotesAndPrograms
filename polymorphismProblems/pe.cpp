void sort(int*a, int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

}

void order(int*a, int size, void (*arrange)(int*, int))
{
	arrange(a, size);
}



void Order::desc(int*a, int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(a[j]<a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
