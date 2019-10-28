int solution(vector<int> plants, int capacity1, int capacity2) {
  int i = 0, j = plants.size() - 1, rem_cap1 = 0, rem_cap2 = 0, refill = 0;

  while (i <= j) {
    if (i == j) {
      if ((rem_cap1 + rem_cap2) < plants[i]) {
        rem_cap1 = capacity1;
        refill++;
      }
    }
    else {
      if (rem_cap1 < plants[i]) refill++;
      if (rem_cap2 < plants[j]) refill++;
      rem_cap1 = (plants[i] > rem_cap1) ? (capacity1 - plants[i]) : (rem_cap1-plants[i]);
      rem_cap2 = (plants[j] > rem_cap2) ? (capacity2 - plants[j]) : (rem_cap2 - plants[j]);
    }
    i++; j--;
  }
  return refill;
}
