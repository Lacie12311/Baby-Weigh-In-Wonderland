#include <stdio.h>
int main()
{

int newBornCount, sixMonthOldCount, sixMonthWeights, oneYearOldCount, newBornWeights, oneYearWeights, i;
float newBrnsWghtsTotal=0, sixMnthswgtsTotal=0, oneYrwghtsTotal=0, babiesWghtTotal;
float newBrnsAvg, sixMnthsAvg, oneYrAvg;
	{
	printf("Enter number of new born babies: ");
	scanf("%d",&newBornCount);
	float newBornWeights[newBornCount];
	printf("Enter number of babies with atleast six months: ");
	scanf("%d",&sixMonthOldCount);
	float sixMonthWeights[sixMonthOldCount];
	printf("Enter number of babies with atleast one year: ");
	scanf("%d",&oneYearOldCount);
	float oneYearWeights[oneYearOldCount];
	}
	{
	printf("Enter weights for new borns one by one ");
	for(i=0;i<newBornCount;i++)
	scanf("%f",&newBornWeights);
	}

printf("Enter weights for six months plus one by one ");
for(i=0;i<sixMonthOldCount;i++)
{
scanf("%f",&sixMonthWeights);
}

printf("Enter weights for one year plus babies one by one ");
for(i=0;i<oneYearOldCount;i++)
{
scanf("%f",&oneYearWeights);
}

for(i=0;i<newBornCount;i++)
{
newBrnsWghtsTotal = newBrnsWghtsTotal + newBornWeights;
}
newBrnsAvg = newBrnsWghtsTotal / newBornCount;
for(i=0;i<sixMonthOldCount;i++)
{
sixMnthswgtsTotal = sixMnthswgtsTotal + sixMonthWeights;
}
sixMnthsAvg = sixMnthswgtsTotal / sixMonthOldCount;
for(i=0;i<oneYearOldCount;i++)
{
oneYrwghtsTotal = oneYrwghtsTotal + oneYearWeights;
}
oneYrAvg = oneYrwghtsTotal / oneYearOldCount;
babiesWghtTotal = newBrnsWghtsTotal + sixMnthswgtsTotal + oneYrwghtsTotal;
{
printf("Welcome to the Baby weight program\n\n");
printf("weights for one year old Babies:\n\n");
printf("Total weights for Babies who are atleast one year old are %.2f lbs\n",oneYrwghtsTotal);
printf("Average weights for Babies who are atleast one year old are %.2f lbs\n\n",oneYrAvg);

printf("weights for six months old Babies:\n\n");
printf("Total weights for Babies who are atleast six months old are %.2f lbs\n",sixMnthswgtsTotal);
printf("Average weights for Babies who are atleast six months old are %.2f lbs\n\n",sixMnthsAvg);

printf("weights for new Babies:\n\n");
printf("Total weights for Babies who are new borns are %.2f lbs\n",newBrnsWghtsTotal);
printf("Average weights for Babies who are new borns are %.2f lbs\n\n",newBrnsAvg);
}

printf("Total weight for all babies is %.2f lbs",babiesWghtTotal);
return 0;
}
