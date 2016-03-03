// Exercise 17.19
// // Why is it okay to call m[4].str() without first checking whether m[4] 
// // was matched?
// // We expect that the two delimiters in m[4] and m[6] are the same. 
// // If m[4](or m[6]) is mismatched, m[4].str()(or m[6].str() respectively) 
// // returns an empty string which can also be compared with the other
// // delimiter. 
//
