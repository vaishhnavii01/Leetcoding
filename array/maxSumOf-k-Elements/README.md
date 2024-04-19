<h2><a href="https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/">Maximum Points You Can Obtain from Cards</a></h2>
<h3>Medium</h3>
<hr>
<div>
    <p>There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array <code>cardPoints</code>.</p>
    <p>In one step, you can take one card from the beginning or from the end of the row. You have to take exactly <code>k</code> cards.</p>
    <p>Your score is the sum of the points of the cards you have taken.</p>
    <p>Given the integer array <code>cardPoints</code> and the integer <code>k</code>, return the maximum score you can obtain.</p>
    <p>&nbsp;</p>
    <p><strong class="example">Example 1:</strong></p>
    <pre><strong>Input:</strong> cardPoints = [1,2,3,4,5,6,1], k = 3
<strong>Output:</strong> 12
<strong>Explanation:</strong> After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12.
    </pre>
    <p><strong class="example">Example 2:</strong></p>
    <pre><strong>Input:</strong> cardPoints = [2,2,2], k = 2
<strong>Output:</strong> 4
<strong>Explanation:</strong> Regardless of which two cards you take, your score will always be 4.
    </pre>
    <p><strong class="example">Example 3:</strong></p>
    <pre><strong>Input:</strong> cardPoints = [9,7,7,9,7,7,9], k = 7
<strong>Output:</strong> 55
<strong>Explanation:</strong> You have to take all the cards. Your score is the sum of points of all cards.
    </pre>
    <p><strong class="example">Example 4:</strong></p>
    <pre><strong>Input:</strong> cardPoints = [1,1000,1], k = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> You cannot take the card in the middle. Your best score is 1.
    </pre>
    <p><strong class="example">Example 5:</strong></p>
    <pre><strong>Input:</strong> cardPoints = [1,79,80,1,1,1,200,1], k = 3
<strong>Output:</strong> 202
    </pre>
    <p>&nbsp;</p>
    <p><strong>Constraints:</strong></p>
    <ul>
        <li><code>1 <= cardPoints.length <= 10^5</code></li>
        <li><code>1 <= cardPoints[i] <= 10^4</code></li>
        <li><code>1 <= k <= cardPoints.length</code></li>
    </ul>
</div>

