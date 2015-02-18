Feature: Node Edit
  This tests that node editing functionality works as expected.

  @api @javascript
  Scenario: Edit page node.
    Given I am logged in as a user with the "authenticated user" role
    And I am viewing a "page" node with the title "Test Node"
    Then I should see the heading "Test Node"