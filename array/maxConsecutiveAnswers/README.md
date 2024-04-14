<h2><a href="https://leetcode.com/problems/maximize-the-confusion-of-an-exam/">Maximize the Confusion of an Exam</a></h2>
<h3>Medium</h3>
<hr>
<div>
    <p>You are given a string answerKey, where answerKey[i] is the original answer to the ith question. In addition, you are given an integer k, the maximum number of times you may perform the following operation:</p>
    <p>Change the answer key for any question to 'T' or 'F' (i.e., set answerKey[i] to 'T' or 'F').</p>
    <p>Return the maximum number of consecutive 'T's or 'F's in the answer key after performing the operation at most k times.</p>
    <p>&nbsp;</p>
    <p><strong class="example">Example 1:</strong></p>
    <pre><strong>Input:</strong> answerKey = "TTFF", k = 2
<strong>Output:</strong> 4
<strong>Explanation:</strong> We can replace both the 'F's with 'T's to make answerKey = "TTTT".
There are four consecutive 'T's.
    </pre>
    <p><strong class="example">Example 3:</strong></p>
    <pre><strong>Input:</strong> answerKey = "TTFTTFTT", k = 1
<strong>Output:</strong> 5
<strong>Explanation:</strong> We can replace the first 'F' to make answerKey = "TTTTTFTT"
Alternatively, we can replace the second 'F' to make answerKey = "TTFTTTTT".
In both cases, there are five consecutive 'T's.
    </pre>
    <p>&nbsp;</p>
    <p><strong>Constraints:</strong></p>
    <ul>
        <li>n == answerKey.length</li>
        <li>1 <= n <= 5 * 10^4</li>
        <li>answerKey[i] is either 'T' or 'F'</li>
        <li>1 <= k <= n</li>
    </ul>
</div>
