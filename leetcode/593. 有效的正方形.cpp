class Solution {
public:
    vector<int> max1(vector<int>& x1, vector<int>& x2)
    {
        if (x1[0] < x2[0])
            return  x1;
        else if (x1[0] > x2[0])
            return  x2;
        else if (x1[1] > x2[1])
            return  x1;
        else
            return  x2;
    }
    vector<int> max2(vector<int>& x1, vector<int>& x2)
    {
        if (x1[0] > x2[0])
            return  x1;
        else if (x1[0] < x2[0])
            return  x2;
        else if (x1[1] < x2[1])
            return  x1;
        else
            return  x2;
    }
    double distance(vector<int>& x1, vector<int>& x2)
    {
        return  sqrt(pow(x1[0] - x2[0], 2) - pow(x1[1] - x2[1], 2));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        vector<int>temp1 = max1(p1, p2);
        vector<int>temp2 = max1(p3, p4);
        vector<int>leftup = max1(temp1, temp2);
        vector<int>temp3 = max2(p1, p2);
        vector<int>temp4 = max2(p3, p4);
        vector<int>righdo = max2(temp3,temp4);
        vector<int>leftdo;
        leftdo.push_back(leftup[0]);
        leftdo.push_back(righdo[1]);
        vector<int>righup;
        righup.push_back(righdo[0]);
        righup.push_back(leftup[1]);
        if (leftup[0] != leftdo[0] || leftup[1] != righup[1] || righdo[0] != righup[0] || righdo[1] != leftdo[1])
            return  false;
        if (distance(leftup, leftdo) != distance(righup, righdo) || distance(leftup, righup) != distance(leftdo, righdo) || distance(leftup, leftdo) != distance(leftdo, righdo))
            return  false;
        return  true;
    }
};
//cout << leftup[0] << leftup[1] << endl;
//cout << righup[0] << righup[1] << endl;
//cout << leftdo[0] << leftdo[1] << endl;
//cout << righdo[0] << righdo[1] << endl;