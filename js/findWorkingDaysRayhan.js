const moment = require("moment")

function formatDate(date) {
    return `${date.split("-")[1]}-${date.split("-")[0]}-${date.split("-")[2]}`
}

function momentDate(date) {
    return moment(date).format("DD MMM YYYY");
}

function addDays(date) {
    var result = new Date(date);
    result.setDate(result.getDate() + 1);
    return result;
}

function deleteDays(date) {
    var result = new Date(date);
    result.setDate(result.getDate() - 1);
    return result;
}

let workingDays = [];

function pushToWorkingDays(id, startDay, endDay) {
    workingDays.push({
        id: id,
        startDay: momentDate(startDay),
        endDay: momentDate(endDay)
    })
}

let startDate = '10-01-2022';  //dd-mm-yyyy
let baseDate = startDate;
let endDate = '25-01-2022';   //dd-mm-yyyy
startDate = formatDate(startDate)
startDate = new Date(startDate);
// startDate = addDays(startDate);
endDate = formatDate(endDate)
endDate = new Date(endDate);
// endDate = addDays(endDate);

console.log({startDay: momentDate(startDate)});

console.log({EndDay: momentDate(endDate)});

let tempStartDate = startDate;
let tempEndDate = endDate;

// let excluded = ["14-01-2010","14-01-2019", "20-01-2022", "15-01-2028", "10-01-2022", "25-01-2022", "11-01-2022", "26-01-2022", "31-01-2022"];
// let excluded = [];
let excluded = ["10-01-2022"];

let formattedDates = excluded.map((date) => {
    return formatDate(date);
}).sort((a, b) => new Date(a) - new Date(b)).map(a => addDays(a)).map(a => deleteDays(a))

console.log({
    ExcludedDates: formattedDates.map(date => momentDate(new Date(date)))
});
// formattedDates.map(date => console.log(momentDate(new Date(date))))

if (!formattedDates.length) {
    pushToWorkingDays(01, startDate, endDate)
} else if (startDate < endDate) {
    for (let i = 0; i < formattedDates.length; i++) {
        const exludedDate = formattedDates[i];

        if (startDate < exludedDate) {
            if (endDate > exludedDate) {
                pushToWorkingDays(02, startDate, deleteDays(exludedDate));
                startDate = addDays(exludedDate);
            } else if (endDate < exludedDate) {
                pushToWorkingDays(03, startDate, endDate);
                startDate = addDays(endDate);
                break;
            } else {
                endDate = deleteDays(endDate)
                pushToWorkingDays(04, startDate, endDate);
                startDate = addDays(endDate);
                break;
            }
        } else if (startDate > exludedDate) {
            if (i == formattedDates.length - 1) {
                pushToWorkingDays(05, startDate, endDate);
                startDate = addDays(endDate)
            }
        } else {
            startDate = addDays(startDate);
        }
    }
    if(startDate<=endDate)
    pushToWorkingDays(07, startDate, endDate)
} else if (!excluded.includes(baseDate)) {
    pushToWorkingDays(06, startDate, startDate)
}

console.log(workingDays);