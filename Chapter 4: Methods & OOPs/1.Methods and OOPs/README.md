<div align = "center">

# Methods & OOPs

</div>

## Chapte 1 • Methods and OOPs

### 1. Function to swap two numbers

<details>

#### Problem Description

```
Write a function in that takes in two integers as input and swaps their values.
```

`Example 1:`

```
Input: a = 2, b = 3
Output: 3
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        void swap(int a, int b) {
            int temp = a;
            a = b;
            b = temp;
            cout<<a<<endl;
            cout<<b<<endl;
        }
    };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Solution {
    public:
        void swap(int a, int b) {
            int temp = a;
            a = b;
            b = temp;
            std::cout << a << std::endl;
            std::cout << b << std::endl;
        }
    };
  ```

    </details>

---

</details>

</details>

### 2. Function to check if a number is prime or not

<details>

#### Problem Description

```
Write a program that takes in a positive integer and returns a boolean value indicating whether the input integer is a prime number or not.
```

`Example 1:`

```
Input: num = 2
Output: true
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        bool isPrime(int num) {
            if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }

        return true;
        }
    };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Solution {
    public:
        bool isPrime(int num) {
            if (num <= 1) {
                return false;
            }
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    return false;
                }
            }
            return true;
        }
    };
  ```

    </details>

---

</details>

</details>

### 3. Function to find smallest among three numbers

<details>

#### Problem Description

```
Write a program that takes in three integers and returns the smallest of the three. The function should return an integer.
```

`Example 1:`

```
Input: a = 1, b = 2, c = 3
Output: 1
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution
  {
  public:
      int min(int a, int b, int c)
      {
          if (a < b)
          {
              if (a < c)
                  return a;
          }
          else if (b < a)
          {
              if (b < c)
                  return b;
          }
          else
              return c;
      }
  };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Solution {
    public:
        int min(int a, int b, int c) {
            int min = a;
            if (b < min) {
                min = b;
            }
            if (c < min) {
                min = c;
            }
            return min;
        }
    };
  ```

    </details>

---

</details>

</details>

### 4. Function to count vowels in a string

<details>

#### Problem Description

```
Write a program that takes in a string and returns the count of vowels in the string. The function should return an integer representing the count of vowels in the string.
```

`Example 1:`

```
Input: s = "hello"
Output: 2
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  #include <string>
  class Solution {
  public:
      int countVowels(string s) {
      string lowercaseString = s;
      // Convert the string to lowercase
      for (char& c : lowercaseString) {
          c = std::tolower(c);
      }

      int count = 0;
      for (char c : lowercaseString) {
          if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
              count++;
          }
      }
      return count;
      }
  };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Solution {
    public:
        int countVowels(string s) {
            int count = 0;
            for (int i = 0; i < s.size(); i++) {
                char c = s[i];
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    count++;
                }
            }
            return count;
        }
    };
  ```

    </details>

---

</details>

</details>

### 5. Function to find maximum element in an array

<details>

#### Problem Description

```
Write a function in that takes in an array of integers as input and returns the maximum element in the array.
```

Example 1:

```
Input: arr = [1,2,3,4,5]
Output: 5
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
  public:
      int findMax(vector<int>& arr) {
          return *max_element(arr.begin(),arr.end());
      }
  };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    #include <limits.h>

    class Solution {
    public:
        int findMax(vector<int>& arr) {
            int max = INT_MIN;
            for (int elem : arr) {
                if (elem > max) {
                    max = elem;
                }
            }
            return max;
        }
    };
  ```

    </details>

---

</details>

</details>

### 6. Function to search an element in an array

<details>

#### Problem Description

```
Write a program that searches for a given element in a given array. The function should return a boolean value indicating whether the element was found in the array or not.
```

`Example 1:`

```
Input: arr = [1,2,3,4,5], x = 4
Output: true
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Solution {
    public:
        bool findElement(vector<int>& arr, int x) {
            for(int i = 0; i<arr.size(); i++) {
                if(arr[i] == x) return true;
            }
            return false;
        }
    };
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Solution {
    public:
        bool findElement(vector<int>& arr, int x) {
            for (int elem : arr) {
                if (elem == x) {
                    return true;
                }
            }
            return false;
        }
    };
  ```

    </details>

</details>

</details>

### 7. Create a class called Student

<details>

#### Problem Description

```
Create a class called Student that has the following properties:

name (string)

age (integer)

gender (string)

The class should have the following methods:

getName(): returns the name of the student

getAge(): returns the age of the student

getGender(): returns the gender of the student

setName(String name): sets the name of the student

setAge(int age): sets the age of the student

setGender(String gender): sets the gender of the student
```

`Example 1:`

```
Input:
 ["Student", "getName", "getAge", "getGender", "setName", "setAge", "setGender"]
 [["Kohli", 30, "Male"], [], [], [], ["Sachin"],[50],["Male"]]Output: [null, "Kohli", 30, "Male", null, null, null]
```

**Solutions**

- <details>

     <summary>My Code</summary>

     <br>

  ```cpp
    class Student {
    private:
        string name;
        int age;
        string gender;
    public:
        Student(string name, int age, string gender) {
            this->name = name;
            this->age = age;
            this->gender = gender;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        string getGender() {
            return gender;
        }

        void setName(string name) {
            this->name = name;
        }

        void setAge(int age) {
            this->age = age;
        }

        void setGender(string gender) {
            this->gender = gender;
        }
    }
  ```

     </details>

  ***

</details>

</details>

### 8. Create a class called `Dog`

<details>

#### Problem Description

```
Create a class in called "Dog" with the following properties:

Dog: a constructor that takes in the name, species, and breed as parameters and sets them as the properties of the dog object

getBreed: a method that returns the dog's breed The Dog class should also have the following constructor:
```

`Example 1:`

```
Input:
 ["Dog", "getBreed"]
 [["Tom", "dog", "Beagle"],[]]Output: [null, "Beagle"]
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Dog {
        private:
        string name;
        string species;
        string breed;
    public:
        Dog(string name, string species, string breed) {
            this->name = name;
            this->species = species;
            this->breed = breed;
        }

        string getBreed() {
            return breed;
        }
    }
  ```

    </details>

---

</details>

### 9. Create a class called `Animal` and constructor

<details>

#### Problem Description

```
Create a class in called "Animal" with the following properties:

name: a string representing the animal's name

species: a string representing the animal's species

The class should have the following methods:

getName: a method that returns the animal's name

getSpecies: a method that returns the animal's species
```

`Example 1:`

```
Input:
 ["Animal", "getName", "getSpecies"]
 [["crow", "birds"],[],[]]Output: [null, "crow", "birds"]
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
    class Animal {
        private:
        string name;
        string species;

    public:
        Animal(string name, string species) {
            this->name = name;
            this->species = species;
        }

        string getName() {
            return name;
        }

        string getSpecies() {
            return species;
        }
    }
  ```

    </details>

---

</details>
