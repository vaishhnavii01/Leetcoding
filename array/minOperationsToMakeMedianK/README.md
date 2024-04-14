<h2><a href="https://leetcode.com/problems/minimum-operations-to-make-median-of-array-equal-to-k/description/">Minimum Operations to Make Median of Array Equal to K</a></h2>
<h3>Hard</h3>
<hr>
<div>
    <p>You are given an integer array <code>nums</code> with an odd number of elements (i.e., a median), and an integer <code>k</code>.</p>
    <p>The median of the array is the element whose index is the middle element when the elements are sorted in non-decreasing order.</p>
    <p>For example, the median of <code>[1,3,4]</code> is <code>3</code>, and the median of <code>[2,1,2,4]</code> is <code>2</code>.</p>
    <p>Return <em>the minimum number of operations needed to make the median equal to </em><code>k</code>.</p>
    <p>An operation is an action that replaces an element <code>nums[i]</code> with any <strong>integer</strong>.</p>
    <p>&nbsp;</p>
    <p><strong class="example">Example 1:</strong></p>
    <pre><strong>Input:</strong> nums = [1,3,7,5,2,3,4], k = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> Median is 3, so we need to replace <code>2</code> elements, like [<u>1</u>,<u>3</u>,7,5,<u>3</u>,<u>3</u>,4] with [<u>3</u>,<u>3</u>,7,5,<u>3</u>,<u>3</u>,4], to make median equal to 3.
    </pre>
    <p><strong class="example">Example 2:</strong></p>
    <pre><strong>Input:</strong> nums = [3,3,9,9,7,2,1], k = 7
<strong>Output:</strong> 0
<strong>Explanation:</strong> Median is 7, so no operation is needed.
    </pre>
    <p>&nbsp;</p>
    <p><strong>Constraints:</strong></p>
    <ul>
        <li><code>nums.length == 2 * n + 1</code></li>
        <li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
        <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
        <li><code>1 &lt;= k &lt;= 10<sup>5</sup></code></li>
</div>

