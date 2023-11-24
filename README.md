# MS1 Challenge Guide

A challenge is an integral part of your journey at MS1 to ensure you practice and apply what you learn. At the end of each unit of study, you will be given one or more challenges to solve based on what you have learned so far. Each challenge has a set of requirements and steps you need to follow. A challenge’s requirements aren’t necessarily confined to the skills you learned in the unit that preceded it. Instead, a challenge solution may require that you put together all the skills you have learned from the start of the curriculum.

## Accessing Challenges
At the end of each unit, you’ll find an instructions page for each challenge page in that unit. The instructions page will contain a link to the challenge repository on GitHub and the path of that specific challenge within the repository.

The general link structure will be something like the following:

`https://github.com/ms1-learner/[learning path]-[module number]-[locale version]`

For instance, all challenges of module 1 of the C++ learning path for those studying in Japanese can be accessed via:

`https://github.com/ms1-learner/cpp-01-jp`

Each challenge can be accessed by following the path with the repository which is specified on the insrtuctions page. For example:

`01_introduction_to_cpp/01_challenge`

## Copying Challenges to Your Local Machine
To submit a challenge after navigating to its parent repository, you will need to clone the entire repository to your local machine. If you are unfamiliar with what ‘clone’ means, it’s basically downloading the repository to be able to work on it on your device. 

We will clone the repository located `https://github.com/ms1-learner/cpp-01-jp` as an example.

> Don’t worry if you aren’t familiar with Git and GitHub. This guide will tell you what you need to do, step by step. You will get to study Git and GitHub in more detail in the Agile Development module in your learning path.

Navigate to the repository via the given link.

![challenge-submission-1](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-1.png)

Copy the repository link.

![challenge-submission-2](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-2.png)

Open the terminal on your computer and navigate to the desktop or the folder you want to download the repository in. To navigate to the Desktop via the terminal, type cd Desktop then press Enter/Return on your keyboard.

![challenge-submission-3](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-3.png)

After navigating to Desktop, type git clone followed by the repository link you copied in step 2 then press Enter/Return on your keyboard.

![challenge-submission-4](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-4.png)

The repository folder should now appear on your Desktop. Drag and drop it or open it using Visual Studio Code.

![challenge-submission-5](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-5.png)

![challenge-submission-6](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-6.png)

All challenges are contained within folders in the repository. Each one these folders will have the name and the number of the relevant unit. Each unit has at least 1 challenge and at most 5. 

- If a unit folder has one challenge, this challenge details will be contained in a README file.

 ![challenge-submission-7](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-7.png)

-  If a unit folder has more than one challenge, each challenge details will be contained within a sub-folder.

![challenge-submission-8](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-8.png)

## Creating Your Remote Repository
The process of submitting challenges requires all learners to create remote GitHub repositories. These repositories are where you will store all your solutions to the challenges and add instructors for reviewing and grading.

### Creating Your GitHub Account

> Feel free to skip this sub-section if you already have a GitHub account.

Creating an account on Github is straightforward. We begin by heading to https://github.com/signup .

You will be presented with a prompt to fill in your basic information. Fill it in, solve the captcha and you will end up with something that looks like the following:

![challenge-submission-9](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-9.png)

After finishing, you will be asked some additional questions.

![challenge-submission-10](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-10.png)
Finally, you will be asked whether you would like to go with the free plan or the paid plan. A free account is more than enough for what we will be doing, so go ahead and proceed with the free plan.

![challenge-submission-11](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-11.png)

And that’s it! You are done! You should now see your Github account dashboard.

### Creating Your GitHub Repository
> Feel free to skip this sub-section if you already have created a public GitHub Repository.

Within your profile page, click on “Repositories” tab then click on the “New” button.

![challenge-submission-12](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-12.png)

Provide a name for your repository and make sure it’s set to “public”.

> We require all learners' repositories to be public for grading purposes.

![challenge-submission-13](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-13.png)

That’s it! Copy the repository link as we will use it to connect this GitHub repository with the one you cloned earlier.

![challenge-submission-14](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-14.png)

### Connecting the GitHub Repository with Your Local Repository
To link the cloned local repository to the newly created GitHub repository, you will need to run some Git commands.

> Again, this guide will show you exactly what commands you need to run. You needn’t know how Git works.

Navigate to your local repository folder.

![challenge-submission-15](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-15.png)



The current repository is a clone of the remote one you accessed via the ms1-learner GitHub account. We need to change this remote connection to point instead to the GitHub repository you created on your own account.

First, let’s check the current remote repository. Run the command git remote -v then press Enter/Return on your keyboard.

![challenge-submission-16](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-16.png)

To change this, run the command git remote set-url origin followed by your GitHub repository link.

![challenge-submission-17](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-17.png)

As you can observe in the screenshot above, the remote repository is now changed from `https://github.com/ms1-learner/cpp-01-jp.git` to `https://github.com/devwoven/cpp-challenges-01.git`

The username (highlighted in red) and the repository name (highlighted in blue) will reflect your own repository username as well as the name you chose for your GitHub repository.

Now, you are ready to work on the challenges solutions!

## Working on the solutions
In some cases, a challenge README file will only contain text describing what you need to do. In other challenges, you will be given some code with missing details that you need to complete or you will be given some helper code to start with.

Let’s assume your challenge for unit 1 is to create a C++ program that adds two number. Your solution could be something like the following:

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
Assume you saved this program in a file called add.cpp. Let’s now save and push this solution to the remote repository.

### Preparing and pushing the solutions for grading

To submit your solution and push it to your GitHub repository, you need to first “commit” this solution. To do so, run the following commands in the terminal:

`git add .`

`git commit -m "My solution to challenge of unit 01"`

The first command asks Git to track this new file and the second command saves it with the message “My solution to challenge of unit 01”.

![challenge-submission-18](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-18.png)

Now, your solution is ready to be pushed to the remote repository. Let’s see how we can achieve this.

Run the following command:

`git push --set-upstream origin main`

> The order in this command is very important. Make sure the only thing you change here is the branch name you created. 

![challenge-submission-19](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-19.png)

Now, navigate to your GitHub repository. The changes should be successfully pushed!

> You may be asked to enter password and encounter the following error. To fix this, you have to use personal access token for password authentication. More information is available on [the official document](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/managing-your-personal-access-tokens#creating-a-personal-access-token-classic).

```sh
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/ms1-learner/cpp-01-en.git/'
```

### Submitting the link on MS1
After you update your GitHub repository, you need to submit the GitHub link to your challenge on MS1. Be sure to submit the link to the specific challenge, not just the repsitory link.

Examlple: `https://github.com/taro-yamada/cpp-01-jp/01_introduction_to_cpp/01_challenge`

Navigate to the corresponding challenge page on MS1.

At the bottom, add the link of your GitHub repository and click “Submit”.

![challenge-submission-20](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-20.png)

### Adding instructors to your repository
In order for instructors to review and grade your solutions, you need to add them to your GitHub repository as collaborators.

To add collaborators, click on the “Settings” button.

![challenge-submission-21](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-21.png)

Navigate to the “Collaborators” setting on the left-hand panel and click on it. 

Under “Manage access”, click on “Add people” and add the assigned instructor GitHub username or email.

![challenge-submission-22](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-22.png)

And that’s it! The solution is now uploaded correctly and can be viewed by instructors!

Best of luck!
