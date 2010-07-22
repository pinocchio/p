"OSProcess trace: 'updating pinocchio from squeaksource'."
P upgrade.
"OSProcess trace: 'exporting classes'."
P exportAllHeadless.
"OSProcess trace: 'save and quit Pharo'. "
SmalltalkImage current snapshot: true andQuit: true.

