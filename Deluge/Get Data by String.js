// Requirment: Get all Leads module data which contains "asd" in its First_Name and Last_Name
moduleApiName = "Leads";
result = zoho.crm.searchRecords(moduleApiName, "(First_Name:starts_with:*asd)and(Last_Name:starts_with:*asd)");
myList = List();
for each data in result
{
	nameMap = Map();
	nameMap.put("First_Name", data.get("First_Name"));
	nameMap.put("Last_Name", data.get("Last_Name"));
	myList.add(nameMap);
}
info myList;
