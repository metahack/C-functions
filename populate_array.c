int populate_array (int list[]) {

	int list_length = 50;

	for (int i = 0; i < list_length; i++) {
		list[i] = 0;
	} // for (int i = 0; i < list_length; i++) {

	int length = 0;
	char current_char;
	bool is_negative = false;
	bool is_number = false;

	printf("enter a series of integers separated by a space : ");		
	while (1) {

		current_char = getchar();

		if (current_char > 47 && current_char < 58) {

			list[length] = list[length] * 10 + (current_char - 48);
			is_number = true;	
		}	
		else {
			if (is_number) {	
				is_number = false;
				if (is_negative) {
					list[length] = list[length] * -1;
					is_negative = false;
				}
				length = length + 1;
			} // if (is_number) {	
		} // else {

		if (current_char == '-') {
			is_negative = true;
		} // if (current_char == '-') {

		if (current_char == '\n') {
			
			if (is_negative) {
				
				list[length] = list[length] * -1;
				is_negative = false;
			} // if (is_negative) {
			break;
		} // if (current_char = "\n") {

		if (current_char == ' ') {
			if (is_negative) {
            
            list[length] = list[length] * -1;
            is_negative = false;
         } // if (is_negative) {
         continue;
      } // if (current_char = " ") {
   } // while (!exit) {
   return length;
} // int populate_array (int list[]) {
