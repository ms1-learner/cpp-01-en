# MS1 Challenge Guide

A challenge is an integral part of your journey at MS1 to ensure you practice and apply what you learn. At the end of each unit of study, you will be given one or more challenges to solve based on what you have learned so far. Each challenge has a set of requirements and steps you need to follow. A challenge’s requirements aren’t necessarily confined to the skills you learned in the unit that preceded it. Instead, a challenge solution may require that you put together all the skills you have learned from the start of the curriculum.

## Accessing Challenges
At the end of each unit, you’ll find an instructions page for each challenge page in that unit. The instructions page will contain a link to the challenge repository on GitHub and the path of that specific challenge within the repository.

The general link structure will be something like the following:

`https://github.com/ms1-learner/[learning path]-[module number]-[locale version]`

For instance, all challenges of module 1 of the C++ learning path for those studying in Japanese can be accessed via:

`https://github.com/ms1-learner/cpp-01-ja`

Each challenge can be accessed by following the path with the repository which is specified on the instructions page. For example:

`01_introduction_to_cpp/01_challenge`

## Setting Up the Challenge Repository
To be able to work on and submit the challenges, you will need to complete a few steps, outlined below.

> Don’t worry if you aren’t familiar with Git and GitHub. This guide will tell you what you need to do, step by step. You will get to study Git and GitHub in more detail in the Agile Development module in your learning path.

On GitHub, navigate to the repository you want to clone. We will clone the following repository as an example: `https://github.com/ms1-learner/cpp-01-en`.

<img width="1840" alt="Screenshot 2023-12-21 at 11 28 08" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/72c6b630-43cf-407c-a048-9c06bafda3bc">

Select the green button labeled **Code**, and copy the **HTTPS** URL of the repository.

<img width="1840" alt="Screenshot 2023-12-21 at 11 28 18" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/20cd5b57-cac2-48f5-b8ce-a209976c8e4e">

Open the terminal on your computer and navigate to the folder into which you want to clone the repository. For example, to navigate to your Documents folder, if it exists, type `cd Documents` then press enter/return on your keyboard.

<img width="990" alt="Screenshot 2023-11-24 at 13 07 44" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/73238ec2-79d4-47be-b719-b14b17d21a06">

After navigating to Documents, type `git clone` followed by the repository link you copied previously then press Enter/Return on your keyboard.

<img width="990" alt="Screenshot 2023-11-24 at 13 06 35" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/c946119e-e9b4-4272-bfb2-3fa65b854b4e">

The repository should now be cloned into your Documents folder.

Navigate into your cloned repository:

```bash
cd cpp-01-en
```

Then run the following git command:

```bash
git remote rename origin ms1
```

We will come back to this repository, so don't close the terminal just yet.

Next we need to make a new, empty repository on your enterprise github account.

Navigate to your repositories page from your profile icon on the top right:

<img width="1840" alt="Screenshot 2023-12-21 at 12 55 54" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/15a2fc85-ac92-41a6-9179-cbc9c55818b4">

Select the green button labeled `New`.

On the "Create a new repository" page, select yourself as the owner, and give the repository the same name as the repository you cloned earlier. In this case, `cpp-01-en`. Leave all the other settings in their default state. 

<img width="1840" alt="Screenshot 2023-12-21 at 13 34 13" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/a87d0612-fe59-4b5d-9751-a30b581fb48f">

On the next screen, select HTTPS, then copy the git commands from the bottom box.

<img width="1840" alt="Screenshot 2023-12-21 at 13 34 39" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/9eb8f152-69a2-4f0e-b500-c8e23819222d">

Paste these commands in the same terminal from before, from inside the previously cloned repository.

```bash
git remote add origin https://github.tmc-stargate.com/alexander-bolinsky/cpp-01-en.git
git branch -M main
git push -u origin main
```

You will be asked for your GitHub username. Type in your account name and press enter.

Then you will be asked for your GitHub password. Don't type anything in here yet. We will come back to this after the next steps.

 Return to GitHub, and navigate to the settings page of your profile.

<img width="1840" alt="Screenshot 2023-12-21 at 13 46 19" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/5011c032-bb55-4d4c-bc2c-ed2fbbb549af">

From here access the **Developer settings** page from the bottom of the navigation panel on the left.

<img width="1840" alt="Screenshot 2023-12-21 at 13 46 57" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/fbec620a-bd83-44ab-87b4-e2585e45cde7">

Select **Personal access tokens** from the navigation panel on the left, then click the **Generate new token** button.

<img width="1840" alt="Screenshot 2023-12-21 at 13 47 15" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/ed1a3cec-a736-49c7-bed3-34980c14d654">

Provide a note (this can be anything), select 90 days expiration, and check the box next to **repo**.

<img width="1840" alt="Screenshot 2023-12-21 at 13 49 29" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/f3206fdc-79c1-47d1-b242-bfdd4fc7c538">

Then scroll down and click the green **Generate token** button to generate your personal access token.

<img width="1840" alt="Screenshot 2023-12-21 at 13 49 37" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/8c5b4dd3-15c3-4d56-9128-6dde7563a0fd">

Copy this personal access token, paste it into the terminal where you were previously prompted for your GitHub password, and press enter.

<img width="1840" alt="Screenshot 2023-12-21 at 13 50 01" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/66f20e9f-7060-4055-b359-d6ce93cd133d">

Once finished the terminal should display some output ending in something like the following:

```bash
To https://github.tmc-stargate.com/alexander-bolinsky/cpp-01-en.git
* [new branch]      main -> main
branch 'main' set up to track 'origin/main'.
```

If you return to your newly created repository on GitHub, it should now be populated with the content from the original cloned repository.

Open your repository using Visual Studio Code.

<img width="1840" alt="Screenshot 2023-11-24 at 13 13 54" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/b135f4fb-db63-440d-8966-cf72a3d97388">

<img width="1840" alt="Screenshot 2023-11-24 at 13 12 07" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/596eb26c-e582-4889-9c43-3a11dc76cf09">

All challenges are contained within folders in the repository. Each one these folders will have the name and the number of the relevant unit.

<img width="1840" alt="Screenshot 2023-11-24 at 13 12 36" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/90c77026-2c1e-47d0-9da6-c3f6302df015">

Now, you are ready to work on the challenge solutions!

## Working on the solutions
In some cases, a challenge README file will only contain text describing what you need to do. In other challenges, you will be given some code with missing details that you need to complete or you will be given some helper code to start with.

Let’s assume your challenge is to create a C++ program that adds two numbers. Your solution could be something like the following:

> Note: You don’t need to understand any of this. This is purely used as a demonstration.

```cpp
#include <iostream>
#include <string>

int add(int a,int b) {
   return a + b;
}
int main() {
    std::cout << "The result of adding 5 and 3 is " + std::to_string(add(5,3)) << std::endl;
    return 0;
}
```

Assume you saved this program in a file called `main.cpp`. Let’s now save and push this solution to GitHub.

## Preparing and pushing the solutions for grading

To submit your solution and push it to your GitHub repository, you need to first “commit” this solution. To do so, run the following commands in the terminal:

`git add .`

`git commit -m "Submit challenge for grading"`

The first command asks Git to track this new file and the second command saves it with the message “Submit challenge for grading”.

<img width="1840" alt="Screenshot 2023-11-24 at 13 20 19" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/f5b8b456-7db9-43e3-8d63-798f9ff132d3">

Now, your solution is ready to be pushed to the remote repository:

`git push`

<img width="1840" alt="Screenshot 2023-11-24 at 13 20 50" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/fd27927b-2f24-4414-9e6c-73f5ca70b444">

Now, navigate to your GitHub repository. The changes should be successfully pushed!

### Submitting the link on MS1
After you update your GitHub repository, you need to submit the GitHub link to your challenge on MS1. Be sure to submit the link to the specific challenge, not just the repository link.

Example: `https://github.com/abolinsky/cpp-01-en/tree/main/01_introduction_to_cpp/01_challenge`

Navigate to the corresponding challenge page on MS1.

At the bottom, add the link of your GitHub repository and click “Submit”.

<img width="849" alt="Screenshot 2023-12-21 at 14 26 12" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/c6deb93e-49dc-4132-92d8-560b00cef07d">

### Adding instructors to your repository
In order for instructors to review and grade your solutions, you need to add them to your GitHub repository as collaborators.

To add collaborators, click on the **Settings** button.

<img width="1840" alt="Screenshot 2023-11-29 at 14 45 52" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/292c9ad9-d30d-4794-b16a-cd441ab017b9">

Navigate to the **Collaborators** setting on the left navigation panel and click on it. 

Under **Manage access**, click on **Add people** and add the assigned instructor GitHub username or email.

<img width="1840" alt="Screenshot 2023-12-21 at 14 29 49" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/ce562238-8aa6-40a2-94a0-d3193c1bd41a">

<img width="1840" alt="Screenshot 2023-12-21 at 14 30 30" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/f951ec51-36ae-4f1e-ae71-4d48484e50b7">

<img width="1840" alt="Screenshot 2023-12-21 at 14 30 38" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/1339bbe4-8e9e-4c32-acab-660e0be58c36">

<img width="1840" alt="Screenshot 2023-12-21 at 14 30 52" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/fdcfda69-ae1f-4451-9a66-8f65f56d7f5b">

And that’s it! The solution is now uploaded correctly and can be viewed by instructors!

Best of luck!
