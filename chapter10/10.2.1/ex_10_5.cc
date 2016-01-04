//  @Brief  In the call to equal on rosters, what would happen if both rosters held C-style strings, rather than library strings? 
//  @Answer For such case, std::equal is going to compare the address value rather than the string value. 
//       So the result is not the same as std::string. Try to avoid coding this way.
