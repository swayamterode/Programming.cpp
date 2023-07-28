class Solution
{
public:
    bool savePatients(vector<int> &vaccine, vector<int> &midichlorians)
    {
        sort(vaccine.begin(), vaccine.end());
        sort(midichlorians.begin(), midichlorians.end());
        int count = 0;
        for (int i = 0; i < vaccine.size(); i++)
        {
            if (vaccine[i] > midichlorians[i])
                count++;
            else
                break;
        }
        if (count == vaccine.size(a))
            return true;
        return false;
    }
};