# Changelog

## [2.2.6] - 2019-02-13

### Added

- insert demo log 2

## [2.2.5] - 2019-02-13

### Added
- insert demo log

## [2.2.4] - 2019-01-04

### Added

- Alias for `/diagnostics` topic
- Hardcoded `console_backend` topics

## [2.2.3] - 2019-01-03

### Added

- Alias for recorded `/octopus/node_status` topic

### Changed

- Use `rosmaster --core` instead of `roscore`

## [2.2.2] - 2018-12-27

### Changed

- Skip machine assignment if node_assignment is not present.

## [2.2.1] - 2018-12-27

### Changed

- Use hostname instead of IP for ROSMaster in vehicle mode
- Support delayed start in auto_start config

## [2.2.0] - 2018-12-20

### Changed

- Remove 'Octopus-' from `vehicle_name`
- Use NodeHandler in debrief mode

## [2.1.9] - 2018-12-20

### Changed

- Change ds-play timeout to 60s (0.05s * 1200)

## [2.1.8] - 2018-12-13

### Added

- Add `trip_id` to `landing_cfg`

## [2.1.7] - 2018-12-12

### Fixed

- add IMAGE_BUILD_ID in docker

## [1.3.4] - 2018-08-16

### Removed
- rospy

### Changed
- code structure
- start/exit logic

