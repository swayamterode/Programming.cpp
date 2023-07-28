# Save Patients

## Problem Description

A new deadly virus has infected large population of a planet. A brilliant scientist has discovered a new strain of virus which can cure this disease. Vaccine produced from this virus has various strength depending on `midichlorians` count. A person is cured only if `midichlorians` count in vaccine batch is more than `midichlorians` count of person. A doctor receives a new set of report which contains `midichlorians` count of each infected patient, Practo stores all vaccine doctor has and their `midichlorians` count. You need to determine if doctor can save all patients with the vaccines he has. The number of vaccines and patients are equal.

Return `true` if Possible else return `false`.

**Example 1:**

```js
Input: (vaccine = [123, 146, 454, 542, 456]),
  (midichlorians = [100, 328, 248, 689, 200]);
Output: false;
```

## Solution

```cpp
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
```
