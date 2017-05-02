## IAS Examination
Mr.Agarwal is preparing for the IAS exams.

According to the rules of the exam, examinees must answer **N** questions. 
The exam being famous for its difficulty, each question has 26 answers, but only one of which is correct. 
Answers are denoted by **capital Latin letters from A to Z**.
 Mr.Agarwal knows all the questions that can be asked, and for each of them he knows the answer he will choose (some of them can be incorrect).
 For each question, we'll tell you Mr.Agarwal's answer to it.
 

The exam goes on as follows. First, all the questions are **shuffled randomly**.
 Then, a examinee is asked these questions one-after-one in the new shuffled order.
 If the examinee answers any **question incorrectly, the exam is over**. Total marks of the contestant are calculated as follows.
 Let X denote the number of questions answered correctly by the examinee.
Depending on this value, the marks are determined: **W<sub>0</sub> marks is obtained for X = 0, W<sub>1</sub> marks is for X = 1, and so on till X = N**.
Note that the exam was invented by a crooked mind, and so a case where Wi ≥ Wi + 1 for some 0 ≤ i ≤ N − 1 is possible.
Mr.Agarwal is interested in finding the **maximum possible marks** that he can achieve.
### Input
The first line of input contains an integer **T** denoting the number of test cases. The description of **T** test cases follows.

The first line of each test case contains a single integer *N* denoting the number of questions.

Next line contains *N* capital Latin letters denoting the correct answers to these questions.

Next line contains *N* capital Latin letters denoting answers given by Mr.Agarwal to these questions.

Next line contains *N + 1* space-separated integers **W<sub>0</sub>, W<sub>1</sub>, ..., W<sub>N</sub>** denoting the marks for 0, 1, ..., N correct answers.
### Output
 For each test case, output a single line containing the value of maximum possible marks that Mr.Agarwal can get.
    
### Constraints

**1<=T<=1000**

**1<=N<=10<sup>3</sup>** 

**0<=W<sub>i</sub><=10<sup>9</sup>** 

###Example

#### Input

2<br>
5<br>
LMNOP<br>
PMNOL<br>
0 10 20 30 40 50<br>
3<br>
WUT<br>
YEH<br>
8 4 3 2<br>

#### Output
30<br>
8
#### Explanations
For the first case ,If questions will be placed in order: 2nd (Mr.Agarwal's answer is B, which is correct), 3rd (Mr.Agarwal's answer is C, and it is correct as well), 4th (Mr.Agarwal's answer is D, and he is right), 5th (Mr.Agarwal's answer is A but correct answer is E and the exam is over), 1st, Mr.Agarwal will correctly answer 3 questions, and therefore achieve 30 marks.<br>
The second case, all answers all incorrect , so he achieves W<sub>0</sub> marks. 


 
	