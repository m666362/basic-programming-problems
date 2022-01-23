// Type Here
events = [
    { "startDate": "10-01-2022", "endDate": "12-01-2022", "id": "001" },
    { "startDate": "10-01-2022", "endDate": "12-01-2022", "id": "009" },
    { "startDate": "21-01-2022", "endDate": "25-01-2022", "id": "002" },
    { "startDate": "28-01-2022", "endDate": "29-01-2022", "id": "003" },
    { "startDate": "10-01-2022", "endDate": "15-01-2022", "id": "004" },
    { "startDate": "17-01-2022", "endDate": "20-01-2022", "id": "005" },
    { "startDate": "28-01-2022", "endDate": "30-01-2022", "id": "005" },
    { "startDate": "30-01-2022", "endDate": "31-01-2022", "id": "008" },
    { "startDate": "26-01-2022", "endDate": "27-01-2022", "id": "008" }
  ];
  dateFormat = "dd-MM-yyyy";
  startedDateMap = Map();
  
  // This loop will create a map, where key=startDate and value=element of events
  for each index i in events
  {
	  event = events.get(i);
	  startedDateMap.put(event.get("startDate").toDate(dateFormat).toString()+"__"+i, event);
  }
  
  // Sorting by keys. As its key is start Date, it will sorted by startDate
  startedDateMap.sortKey(true);
  startDays = startedDateMap.keys(); 
  sortedEventsByStartDate = List();
  
  // Creating list from map, this list will be sorted by start Date
  for each startDay in startDays
  {
	  sortedEventsByStartDate.add(startedDateMap.get(startDay));
  }
  
  finalResult = Map();
  for each index i in events
  {
	  tempResult = List();
	  if ( sortedEventsByStartDate.size() > 0 ) 
      {
	  	tempResult.add(sortedEventsByStartDate.get(0));
		sortedEventsByStartDate.remove(0);
        loopDates =  sortedEventsByStartDate;
		  for each index j in loopDates
		  {
			  currentDate = loopDates.get(j);
			  if ( currentDate.get("startDate").toDate(dateFormat) > tempResult.get(tempResult.size()-1).get("endDate").toDate(dateFormat) ) 
			  {
					tempResult.add(currentDate);
					sortedEventsByStartDate.removeElement(currentDate);
			  }
		  }
      }
	  if ( tempResult.size() > 0 ) 
      {
		  finalResult.put(i, tempResult);
      }
  }
  
  for each tempkey in finalResult.keys()
  {
	  info finalResult.get(tempkey);
  }