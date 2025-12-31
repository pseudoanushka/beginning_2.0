// import jsonfile from "jsonfile";
// import moment from "moment";
// import simpleGit from "simple-git";

// const git = simpleGit();
// const path = "./data.json";

// const START = moment("2025-03-01");
// const END = moment("2025-12-29");

// async function run() {
//   let day = START.clone();

//   while (day.isSameOrBefore(END)) {
//     const date = day.hour(12).minute(0).second(0).format();

//     await jsonfile.writeFile(path, { active_on: date });
//     await git.add([path]);

//     await git.commit(`Activity ${date}`, {
//       "--date": date,
//     });

//     day.add(1, "day");
//   }

//   await git.push();
//   console.log("Backfill complete");
// }

// run().catch(console.error);
import jsonfile from "jsonfile";
import moment from "moment";
import simpleGit from "simple-git";

const git = simpleGit();
const path = "./data.json";

async function run() {
  const date = moment("2025-12-30")
    .hour(12)
    .minute(0)
    .second(0)
    .format();

  await jsonfile.writeFile(path, { active_on: date });
  await git.add([path]);

  await git.commit(`Activity ${date}`, {
    "--date": date,
  });

  await git.push();
  console.log("Commit for 30 Dec 2025 done");
}

run().catch(console.error);
