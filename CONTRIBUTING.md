
So you want to contribute!
Thanks for helping out the community! We are actively looking for contributors and maintainers so you are more than welcome.

I thought I should lay out some core principles that we will follow so that this repo doesn't get too wild and lose its value.

We are a CHEATSHEET above all: all examples to be as simple as possible, easily searched, and presented for copy-and-paste.
Collapsible explanations: No more than 1-2 sentences of explanation, any more than that we put inside details tags.
React + TypeScript ONLY: React's ecosystem is huge, we can't possibly cover it all. This includes Redux. Would encourage people to maintain separate lists for stuff like React + Apollo Graphql, for example. Also we make no attempt to convince people to use TypeScript, we only exist to help people who have already decided to try it out.
Add TypeScript Playground Links: Whenever adding a code example longer than four lines, add a link to the TypeScript Playground with the code. Use the default compiler Playground options.
That's all I've got! Again, really happy you are thinking about helping out, who knows, the person who you might be helping is yourself in future!

Project structure
All content is in /docs
the /docs/basic is compiled into README.md to preserve GitHub readability via GitHub action, thanks
/website consumes the /docs content, which is a Docusaurus 2 site, which also has Algolia search (thanks to both teams for their support!)
The website is deployed to Netlify on swyx's personal account.
