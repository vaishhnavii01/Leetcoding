<h2><a href="https://leetcode.com/problems/median-of-two-sorted-arrays/description/">Median of Two Sorted Arrays</a></h2>
<h3>Hard</h3>
<hr>
<div>
    <p>Given two sorted arrays <code>nums1</code> and <code>nums2</code> of size <code>m</code> and <code>n</code> respectively, return the median of the two sorted arrays.</p>
    <p>The overall run time complexity should be <code>O(log (m+n))</code>.</p>
    <p>&nbsp;</p>
    <p><strong class="example">Example 1:</strong></p>
    <pre><strong>Input:</strong> nums1 = [1,3], nums2 = [2]
<strong>Output:</strong> 2.00000
<strong>Explanation:</strong> merged array = [1,2,3] and median is 2.
    </pre>
    <p><strong class="example">Example 2:</strong></p>
    <pre><strong>Input:</strong> nums1 = [1,2], nums2 = [3,4]
<strong>Output:</strong> 2.50000
<strong>Explanation:</strong> merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
    </pre>
    <p><strong class="example">Example 3:</strong></p>
    <pre><strong>Input:</strong> nums1 = [0,0], nums2 = [0,0]
<strong>Output:</strong> 0.00000
    </pre>
    <p><strong class="example">Example 4:</strong></p>
    <pre><strong>Input:</strong> nums1 = [], nums2 = [1]
<strong>Output:</strong> 1.00000
    </pre>
    <p><strong class="example">Example 5:</strong></p>
    <pre><strong>Input:</strong> nums1 = [2], nums2 = []
<strong>Output:</strong> 2.00000
    </pre>
    <p>&nbsp;</p>
    <p><strong>Constraints:</strong></p>
    <ul>
        <li><code>nums1.length == m</code></li>
        <li><code>nums2.length == n</code></li>
        <li><code>0 <= m <= 1000</code></li>
        <li><code>0 <= n <= 1000</code></li>
        <li><code>1 <= m + n <= 2000</code></li>
        <li><code>-10<sup>6</sup> <= nums1[i], nums2[i] <= 10<sup>6</sup></code></li>
    </ul>
</div>

