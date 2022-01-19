// Type Here
startDate = "10-01-2021";  //dd-mm-yyyy
endDate = "11-01-2022";   //dd-mm-yyyy
excludedDates = ["10-01-2022", "14-01-2022","15-01-2022","25-01-2022","26-01-2022","31-01-2022"];
//excludedDates = [];
// excludedDates = ["10-01-2022"];

dateFormat="dd-MM-yyyy";
outputDateFormat = "dd MMMM,yyyy";

startLoopDate = startDate.toDate(dateFormat);
endLoopDate = endDate.toDate(dateFormat);

workingDays = List();
// info startDate.toDate(dateFormat).toString(outputDateFormat);

loop_count = startLoopDate.daysbetween(endLoopDate) ;
loops = ".".leftPad(loop_count).toList("");
currentDate = startLoopDate;
startingDate = currentDate;

for each something in loops {
	info "something";
	info something;
	nextDate = currentDate.addDay(1);
	if(excludedDates.contains(currentDate.toString(dateFormat)) ||  excludedDates.contains(nextDate.toString(dateFormat))  ){
		if( !excludedDates.contains(currentDate.toString(dateFormat) ) ) {
			validDateRange = {"id": 01, "startDate": startingDate.toString(outputDateFormat), "endDate": currentDate.toString(outputDateFormat)};
			workingDays.add(validDateRange);
			startingDate = currentDate.addDay(1);
		}else{
			startingDate = currentDate.addDay(1);
		}
	}
	currentDate = currentDate.addDay(1);
}
if( !excludedDates.contains(currentDate.toString(dateFormat) ) ) {
	validDateRange = {"id": 02, "startDate": startingDate.toString(outputDateFormat), "endDate": currentDate.toString(outputDateFormat)};
	workingDays.add(validDateRange);
}

info "Result: ";
for each something in workingDays {
	info something;
}
