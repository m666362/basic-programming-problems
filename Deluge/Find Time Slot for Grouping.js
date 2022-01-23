// Type Here
events = [
    { "startDate": "10-01-2022", "endDate": "12-01-2022", "id": "001" }
  ];
  dateFormat = "dd-MM-yyyy";
  startedDates = Map();
  for each index i in events
  {
	  event = events.get(i);
	  startedDates.put(event.get("startDate").toDate(dateFormat).toString()+"__"+i, event);
  }
  startedDates.sortKey(true);
  result = startedDates.keys();
  sortedStartDates = List();
  for each r in result
  {
	  sortedStartDates.add(startedDates.get(r));
  }
  finalResult = Map();
  for each index i in events
  {
	  tempResult = List();
	  if ( sortedStartDates.size() > 0 ) 
      {
	  	tempResult.add(sortedStartDates.get(0));
		sortedStartDates.remove(0);
        loopDates =  sortedStartDates;
		  for each index j in loopDates
		  {
			  currentDate = loopDates.get(j);
			  if ( currentDate.get("startDate").toDate(dateFormat) > tempResult.get(tempResult.size()-1).get("endDate").toDate(dateFormat) ) 
			  {
					tempResult.add(currentDate);
					sortedStartDates.removeElement(currentDate);
			  }
		  }
      }
	  if ( tempResult.size() > 0 ) 
      {
		  finalResult.put(i, tempResult);
      }
  }
  info finalResult;
  for each tempkey in finalResult.keys()
  {
	  info finalResult.get(tempkey);
  }