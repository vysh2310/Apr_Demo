 echo "Polyspace analysis showed defects, do not commit or merge"
 cd C:\Program Files\Polyspace\R2023a\polyspace\bin
 polyspace-bug-finder -sources C:\Apr_Demo\Apr_Demo\Demo.c -results-dir C:\Apr_Demo\Apr_Demo\temp3_analysis_result
 polyspace-results-export -format csv ^
    -results-dir C:\DebugGit\DebugMethod\temp3_analysis_result ^
    -output-name C:\DebugGit\DebugMethod\temp3_analysis_result.csv
 


