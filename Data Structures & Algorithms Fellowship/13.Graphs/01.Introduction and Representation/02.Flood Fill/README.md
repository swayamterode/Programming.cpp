# Flood Fill

An image is represented by an m x n integer grid image where `image[i][j] `represents the pixel value of the image.

You are also given three integers `sr`, `sc`, and `color`. You should perform a flood fill on the image starting from the pixel `image[sr][sc]`.

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with `color`.

Return the modified image after performing the flood fill.

**Example 1:**

```js
Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation: From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
```

**Note:** the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.

![img](https://assets.nextleap.app/images/flood1-grid-5677b3fc-32e5-432b-b7fe-d3f0d717c5e0.jpg)

**Example 2:**

```js
Input: image = [[0, 0, 0],[0, 0, 0]], sr = 0, sc = 0, color = 0
Output: [[0,0,0],[0,0,0]]
Explanation: The starting pixel is already colored 0, so no changes are made to the image.
```

Constraints:

- `m == image.length`
- `n == image[i].length`
- `1 <= m, n <= 50`
- `0 <= image[i][j], color < 2^16`
- `0 <= sr < m`
- `0 <= sc < n`

## Solution

```cpp
class Solution
{
    private:
        void dfs(int row, int col, vector<vector < int>> &ans, vector< vector< int>> &image, int iniColor, int color, int delrow[], int delcol[])
        {
            ans[row][col] = color;
            int n = image.size();
            int m = image[0].size();

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] != color && ans[nrow][ncol] == iniColor)
                    dfs(nrow, ncol, ans, image, iniColor, color, delrow, delcol);
            }
        }
    public:
        vector<vector < int>> floodFill(vector<vector < int>> &image, int sr, int sc, int color)
        {
            vector<vector < int>> ans = image;
            int iniColor = image[sr][sc];
            int delrow[] = { -1,
                0,
                +1,
                0
            };
            int delcol[] = { 0,
                +1,
                0,
                -1
            };
            dfs(sr, sc, ans, image, iniColor, color, delrow, delcol);
            return ans;
        }
};
```
