# Security Policy

## Supported versions

Security fixes are made against the latest release on the `4.x` line.
Earlier versions (3.x and older) are not maintained; see
[MIGRATION.md](MIGRATION.md) for upgrading.

| Version | Supported |
| ------- | --------- |
| 4.x     | Yes       |
| < 4.0   | No        |

## Reporting a vulnerability

Please report vulnerabilities privately through GitHub's
[private vulnerability reporting](https://github.com/libinjection/libinjection/security/advisories/new).
Do not open a public issue or pull request for a suspected vulnerability.

Include, where you can:

- the affected version or commit,
- the input and the call (for example `libinjection_sqli` or
  `libinjection_xss`) that triggers the problem,
- the observed and expected result, and
- build flags or sanitizer output if it is a memory-safety issue.

This is a volunteer-maintained project, so response times are best effort.
Reporters are credited in the published advisory unless they prefer otherwise.

## What counts as a vulnerability

In scope:

- memory-safety bugs in the C library or its bindings (out-of-bounds reads or
  writes, use of uninitialized memory, crashes or hangs on crafted input),
- parser error states that are reported as benign input instead of
  `LIBINJECTION_RESULT_ERROR`.

libinjection is a heuristic detector, not a complete SQL or HTML parser.
Inputs that evade detection (false negatives) or are wrongly flagged
(false positives) are expected to exist and are normally ordinary bugs. Please
report them as public issues, with the input and the context (single quote,
double quote, or none) in which you tested it. If you believe an evasion is
severe enough to warrant coordinated disclosure, report it privately as above.
