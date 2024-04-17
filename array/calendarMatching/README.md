<h1>Meeting Scheduling Function</h1>
<h2>Problem Statement</h2>
<p>Imagine you need to schedule a meeting with a co-worker for a certain duration. You have access to both your calendar and your co-worker’s calendar, each containing respective meetings for the day. Additionally, you know both of your daily bounds, indicating the earliest and latest times available for meetings. The goal is to write a C++ function that takes in this information and returns a list of all available time blocks during which the meeting could be scheduled, ordered from the earliest time block to the latest.</p>
<h2>Input</h2>
<ul>
  <li>Your calendar (calendar1) in the form of [startTime, endTime].</li>
  <li>Your daily bounds (dailyBounds1) indicating the earliest and latest times available for meetings.</li>
  <li>Co-worker’s calendar (calendar2) in the form of [startTime, endTime].</li>
  <li>Co-worker’s daily bounds (dailyBounds2) indicating their earliest and latest available meeting times.</li>
  <li>The duration of the meeting (meetingDuration).</li>
</ul>
<h2>Output</h2>
<p>A list of all available time blocks during which the meeting could be scheduled, in the format [startTime, endTime], ordered from earliest to latest.</p>
<h2>Example</h2>
<pre><code>Input:
calendar1 = [["9:00", "10:30"], ["noon", "13:00"], ["16:00", "18:00"]]
dailyBounds1 = ["9:00", "20:00"]
calendar2 = [["10:00", "11:30"], ["12:30", "14:30"], ["14:30", "15:00"], ["16:00", "17:00"]]
dailyBounds2 = ["10:00", "18:30"]
meetingDuration = 30

Output:
Available meeting slots:
["09:00", "10:00"]
["11:30", "12:30"]
["15:00", "16:00"]
["18:00", "18:30"]</code></pre>
<p>Note: Times are given and returned in military time format.</p>

