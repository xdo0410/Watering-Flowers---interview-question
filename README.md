You and your friend are gardeners, and you take care of your plants. The plants ar planted in row, and each of them needs a specific amount of water. You are about to water them using watering cans. To avoid mistakes like applying too much water, or not watering a plant at all, you have decided to:
      . water the plants in the order in which they appear: you will water from left to right, and your friend will water from right to left;
      . water each plant if you have sufficient water for it, otherwise refill your watering can;
      . water each plant in one go, i.e. without taking a break to refill the watering can in the middle of watering a single plant. This means that you may sometimes have to refill your watering can before or after watering a plant, even though it is not completely empty.

You start with watering the first plant and your friend start with watering the last plant. You and your friend are watering the plants simultaneously (when you are watering the first plant, your friend is watering the last one; when you are watering the second plant, your friend is watering the penultimate one; and so on). That means that you will meet in the middle of the row of plants. If there is an unwatered plant there, and you and your friend together have enough water for it, you can water it without refilling your watering cans; otherwise, only one of you should refill.

At the beginning you both start with empty watering cans. How many times will you and your friend need to refill your watering cans in order to water all the plants in the row?

Write a function:
    class Solution { public int solution (int[] plants, int capacity1, int capacity2); }
that, givin an array plants of N integers (for the amount of water needed by each plant), and variables capacity1 and capacity2 (for the capacity of your watering can and your friend's), return the number of times you and your friend will have to refill your watering cans to water all the plants.

For example, given plants = [2,4,5,1,2], capacity1 = 5 and capacity2 = 7, the function should return 3.

First you refill and water plants[0] and simultaneously your friend refills and water plants[4]. Then you refill and water plants[1] and simultaneously your friend water plants[3]. Finally you water plants[2] together (as together you have exactly 5 units of water).

Assume that:
      . N is an integer with the range [1.. 1,000];
      . each element of array plants is an integer within the range [1..1,000,000];
      . capacity1 and capacity2 are integers within the range [1..1,000,000,000];
      . both of the watering cans are large enough to fully water any single plant.
  
In your solution, focus on correctness. The performance of your solution will not be the focus of the assessment.

