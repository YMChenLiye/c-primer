	why is s a reference to const but occurs is a plain reference?

cause the s should not be changed by this function. but occurs's result must be calculated by the function.

	Why are these parameters references, but the char parameter c is not?

casue c maybe a temp varable. such as find_char(s, 'a', occurs)

	What would happen if we made s a plain reference? What if we made occurs a reference to const?

s could be changed in the function, and occurs whould not be changed. so occurs = 0; is an error.
