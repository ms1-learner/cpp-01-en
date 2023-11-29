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

## Creating Your GitHub Account
> Feel free to skip this sub-section if you already have a GitHub account.

The process of submitting challenges requires all learners to create remote GitHub repositories. These repositories are where you will store all your solutions to the challenges and add instructors for reviewing and grading.

Creating an account on Github is straightforward. We begin by heading to https://github.com/signup.

You will be presented with a prompt to fill in your basic information. Fill it in, solve the captcha and you will end up with something that looks like the following:

![challenge-submission-9](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-9.png)

After finishing, you will be asked some additional questions.

![challenge-submission-10](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-10.png)
Finally, you will be asked whether you would like to go with the free plan or the paid plan. A free account is more than enough for what we will be doing, so go ahead and proceed with the free plan.

![challenge-submission-11](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-11.png)

And that’s it! You are done! You should now see your Github account dashboard.

## Copying Challenges to Your Local Machine
To submit a challenge after navigating to its parent repository, you will need to fork the repository, then clone it to your local machine.

We will fork and clone the following repository as an example: `https://github.com/ms1-learner/cpp-01-en`.

> Don’t worry if you aren’t familiar with Git and GitHub. This guide will tell you what you need to do, step by step. You will get to study Git and GitHub in more detail in the Agile Development module in your learning path.

Navigate to the repository via the given link.

<img width="1728" alt="Screenshot 2023-11-24 at 12 54 05" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/0cebed3b-57b3-44ab-9250-bc37d2a180e7">

Fork your own copy of the repository. This will create a copy of the repository on your own account.

<img width="1728" alt="Screenshot 2023-11-24 at 13 00 21" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/cc80b97f-5086-4905-bfac-bc436feaa40b">

Proceed with the default settings and press the "Create fork" button to complete the fork.

<img width="1728" alt="Screenshot 2023-11-24 at 12 54 20" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/b65a776a-e2d9-47d4-8f8c-2faa79fa3478">

Copy your forked repository link.

<img width="1728" alt="Screenshot 2023-11-24 at 13 01 27" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/333e32d1-43dc-43d2-84db-26fc6ea72db8">

Open the terminal on your computer and navigate to the folder into which you want to clone the repository. For example, to navigate to your Documents folder, if it exists, type `cd Documents` then press Enter/Return on your keyboard.

<img width="990" alt="Screenshot 2023-11-24 at 13 07 44" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/73238ec2-79d4-47be-b719-b14b17d21a06">

After navigating to Documents, type `git clone` followed by the repository link you copied previously then press Enter/Return on your keyboard.

<img width="990" alt="Screenshot 2023-11-24 at 13 06 35" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/c946119e-e9b4-4272-bfb2-3fa65b854b4e">

The repository should now be cloned into your Documents folder. Open it using Visual Studio Code.

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

>    You may be asked to enter your GitHub account username and password and encounter the following error.
>
>   **fatal: Authentication failed for 'https://github.com/ms1-learner/cpp-01-en.git/'**
>
>   To fix this, you must use a personal access token for authentication. Information detailing this process is available in [the official GitHub documentation](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/managing-your-personal-access-tokens#creating-a-personal-access-token-classic).

### Submitting the link on MS1
After you update your GitHub repository, you need to submit the GitHub link to your challenge on MS1. Be sure to submit the link to the specific challenge, not just the repsitory link.

Example: `https://github.com/abolinsky/cpp-01-en/tree/main/01_introduction_to_cpp/01_challenge`

Navigate to the corresponding challenge page on MS1.

At the bottom, add the link of your GitHub repository and click “Submit”.

<img width="1840" alt="Screenshot 2023-11-29 at 14 42 44" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/37f2b792-098a-4485-a3c5-69bc69328fdc">

### Adding instructors to your repository
In order for instructors to review and grade your solutions, you need to add them to your GitHub repository as collaborators.

To add collaborators, click on the “Settings” button.

<img width="1840" alt="Screenshot 2023-11-29 at 14 45 52" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/292c9ad9-d30d-4794-b16a-cd441ab017b9">

Navigate to the “Collaborators” setting on the left-hand panel and click on it. 

Under “Manage access”, click on “Add people” and add the assigned instructor GitHub username or email.

<img width="1840" alt="Screenshot 2023-11-29 at 14 46 00" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/f19e5f6c-06ef-4981-bcb3-31cdb47b55d2">

And that’s it! The solution is now uploaded correctly and can be viewed by instructors!

Best of luck!
