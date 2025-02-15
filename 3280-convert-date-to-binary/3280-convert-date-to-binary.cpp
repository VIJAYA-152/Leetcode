class Solution {
public:
    string convertDateToBinary(string date) {
         stringstream ss(date);
         string year,mo,da;
         getline(ss,year,'-');
         getline(ss,mo,'-');
         getline(ss,da,'-');
         int y = stoi(year);
        int m = stoi(mo);
        int d = stoi(da);
         // Convert to binary
    string by = "", bm = "", bd = "";
         while (y > 0) { by += to_string(y % 2); y /= 2; }
    while (m > 0) { bm += to_string(m % 2); m /= 2; }
    while (d > 0) { bd += to_string(d % 2); d /= 2; }

    // Reverse to get correct binary representation
    reverse(by.begin(), by.end());
    reverse(bm.begin(), bm.end());
    reverse(bd.begin(), bd.end());

      return by+'-'+bm+'-'+bd;

    
    }
};